#include "PeakCANModule.h"
#include <QDebug>
PeakCANModule::PeakCANModule()
{

}


bool PeakCANModule::initModule (CANBaudRates baudrate, int idDevice)
{
    bool ret = false;
    uint16_t  peakBaudRate = PCAN_BAUD_250K;
    switch (baudrate)
    {
        case  BD250Kbps:
            peakBaudRate = PCAN_BAUD_250K;
        break;
        case BD800Kbps:
            peakBaudRate = PCAN_BAUD_800K;
        break;
    }

    switch (idDevice)
    {
        case  0:
            this->idDevice = PCAN_USBBUS1;
        break;
        case 1:
             this->idDevice = PCAN_USBBUS2;
        break;
    }


    TPCANStatus status =  CAN_Initialize(this->idDevice,peakBaudRate,PCAN_TYPE_ISA_PHYTEC,0,0);

    if (status == PCAN_ERROR_OK)
    {
        qDebug()<< "[PeakCANModule] Init OK";
        ret = true;
    }
    else
    {
        qDebug()<< "[PeakCANModule] Init ERROR" << status;
    }
    return ret;
}
bool PeakCANModule::writeCANMsg (CANMsg msg)
{

    bool ret = false;

    TPCANMsg peakMsg;

    peakMsg.ID = msg.can_id;
    peakMsg.LEN = msg.dlc;
    peakMsg.MSGTYPE = PCAN_MESSAGE_STANDARD;

    for(int i = 0; i <8; i++)
    {
        peakMsg.DATA[i] =  msg.data[i];
    }



    TPCANStatus status =  CAN_Write(this->idDevice,&peakMsg);

    if (status == PCAN_ERROR_OK)
    {
        //qDebug()<< "[PeakCANModule] write OK";
        ret = true;
    }
    else
    {
        qDebug()<< "[PeakCANModule] write ERROR" << status;
    }

    return ret;
}
bool PeakCANModule::readCANMsg(CANMsg* msg)
{

    bool ret = false;

    TPCANTimestamp timeStamp;
    TPCANMsg peakMsg;

    TPCANStatus status =  CAN_Read(this->idDevice,&peakMsg,&timeStamp);

    if (status == PCAN_ERROR_OK )
    {
        //qDebug()<< "[PeakCAN[Module] read OK";
        msg->can_id =  peakMsg.ID;
        msg->dlc = peakMsg.LEN;

        for(int i = 0; i <8; i++)
        {
             msg->data[i] =   peakMsg.DATA[i];
        }

        ret = true;
    }
    else if  (status != PCAN_ERROR_QRCVEMPTY)
    {
        qDebug()<< "[PeakCAN[Module] read ERROR" << status;
    }
    return ret;
}
