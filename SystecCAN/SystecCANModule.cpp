#include "SystecCANModule.h"

#include <QDebug>

SystecCANModule::SystecCANModule()
{
	this->amr = 0xFFF; /*No Filter*/
	this->acr = 0x000;
}


bool SystecCANModule::initModule (CANBaudRates baudrate, int idDevice)
{
	bool ret = false;
    
    switch (baudrate)
    {
        case  BD250Kbps:
            this->systecBaudarate = USBCAN_BAUD_250kBit;
        break;
        case BD800Kbps:
            this->systecBaudarate = USBCAN_BAUD_800kBit;
        break;
        default:
        	qDebug()<< "[SystecCANModule] BAUDRATE DEFAULT";
        	this->systecBaudarate = USBCAN_BAUD_250kBit;
        break;
    }

    this->idDevice = idDevice; /*255 = ANY DEVICe*/
   /* switch (idDevice)
    {
        case  0:
            this->idDevice = PCAN_USBBUS1;
        break;
        case 1:
             this->idDevice = PCAN_USBBUS2;
        break;
    }*/

    UCANRET bRet = UcanInitHardware(&UcanHandle,idDevice,callbackFunc);
	if (bRet==USBCAN_SUCCESSFUL)
	{
        ret = true;
        if (initInterface())
        {
        	qDebug()<< "[SystecCANModule] Init OK";

        }
        else
        {
            qDebug()<< "[SystecCANModule] Init ERROR" ;
        }
	}
    else
    {
        qDebug()<< "[SystecCANModule] Init ERROR: HARDWARE INIT ERROR" ;
    }
    return ret;
}


bool SystecCANModule::initInterface(void)
{
    // initializes the CAN interface
    bool ret = false;
    UCANRET bRet = UcanInitCan (UcanHandle, 
    	HIBYTE (this->systecBaudarate),  
    	LOBYTE (this->systecBaudarate), 
    	USBCAN_SET_AMR(FALSE,amr,FALSE), 
    	USBCAN_SET_ACR(FALSE,acr,FALSE));
     
    if (bRet == USBCAN_SUCCESSFUL)
    {
        if(UcanResetCan(UcanHandle)==USBCAN_SUCCESSFUL)
        {
            qDebug () << "[SystecCANModule] Ret USBCAN_SUCESSFUL" <<bRet;
        
            ret = true;
        }
        else
        {
             qDebug () << "[SystecCANModule] Error reset CAN" <<bRet;
             
            ret = false;
        }
    }
    else
    {
         qDebug () << "[SystecCANModule]Error initializing CAN"<<bRet;
    

        ret = false;
    }
    return ret;
}

bool SystecCANModule::writeCANMsg (CANMsg msg)
{
    bool ret = true;
    UCANRET canRet;
    tCanMsgStruct systecMsg;
    systecMsg.m_bFF = 0x00;
    systecMsg.m_dwID = msg.can_id;
    systecMsg.m_bDLC = msg.dlc;
    for (int i= 0;i < 8; i++ )
    {
       systecMsg.m_bData[i] =  msg.data[i];
    }

    canRet = UcanWriteCanMsg (UcanHandle,&systecMsg);

    if (canRet == USBCAN_SUCCESSFUL)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }

    return ret;
}
bool SystecCANModule::readCANMsg(CANMsg* msg)
{
	bool ret = true;
    tCanMsgStruct systecMsg;
    UCANRET bRet =  UcanReadCanMsg(UcanHandle,&systecMsg);
		
	if (bRet!=USBCAN_SUCCESSFUL)
	{
		ret = false;

		if (USBCAN_CHECK_ERROR(bRet))
		{
           
            qDebug () << "[CAN MANAGER - READ]Error: "<<bRet;
			ret = false;
		}
		if (USBCAN_CHECK_WARNING(bRet))
		{
			
		}
	}

	if (USBCAN_CHECK_VALID_RXCANMSG(bRet))
	{
		if (USBCAN_CHECK_WARNING(bRet))
		{
            
            qDebug () << "[CAN MANAGER - READ] VALID - Warning: "<<bRet;
		}
	}
	else if (USBCAN_CHECK_ERROR(bRet))
	{
        
        qDebug () << "[CAN MANAGER - READ] Error: "<<bRet;
		ret = false;
	}

	if (ret)
	{
        msg->can_id = systecMsg.m_dwID;
        msg->dlc = systecMsg.m_bDLC;
        for (int i= 0;i <8; i++ )
        {
            msg->data[i] = systecMsg.m_bData[i];
        }
	}
	return ret;
}



void STDCALL SystecCANModule::callbackFunc (tUcanHandle UcanHandle, BYTE canEvent)
{
    (void)UcanHandle;
    switch(canEvent)
    {
    case USBCAN_EVENT_INITHW:
        qDebug()<< "USBCAN_EVENT_INITHW";
        break;
    case USBCAN_EVENT_INITCAN:
        qDebug()<< "USBCAN_EVENT_INITCAN";
        break;
    case USBCAN_EVENT_RECIEVE:
       // qDebug()<< "USBCAN_EVENT_RECIEVE";
        break;
    case USBCAN_EVENT_STATUS:
        qDebug()<< "USBCAN_EVENT_STATUS";
        break;
    case USBCAN_EVENT_DEINITCAN:
        qDebug()<< "USBCAN_EVENT_DEINITCAN";
        break;
    case USBCAN_EVENT_DEINITHW:
        qDebug()<< "USBCAN_EVENT_DEINITHW";
        break;
    case USBCAN_EVENT_CONNECT:
        qDebug()<< "USBCAN_EVENT_CONNECT";
        break;
    case USBCAN_EVENT_DISCONNECT:
        qDebug()<< "USBCAN_EVENT_DISCONNECT";
        break;
    case USBCAN_EVENT_FATALDISCON:
        qDebug()<< "USBCAN_EVENT_FATALDISCON";
        break;
    case USBCAN_EVENT_RESERVED1:
         qDebug()<< "USBCAN_EVENT_RESERVED1";
        break;
    }
}
