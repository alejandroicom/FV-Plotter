#include "CANDecoder.h"
#include "ODMapping.h"



CANDecoder::CANDecoder()
{


}
CANDecoder::~CANDecoder()
{


}

void CANDecoder::setModule(CanModule* canModule)
{
    this->canModule = canModule;
}


QString decoResponseStatus(uint8_t status)
{

    QString ret;
    switch(status)
    {
        case CMD_EXECUTED_OK:
            ret = "CMD_EXECUTED_OK";
            break;
        case CMD_IGNORED:
            ret = "CMD_IGNORED";
            break;
        case SYSTEM_BUSY:
            ret = "SYSTEM_BUSY";
            break;
        case SYSTEM_ERROR:
            ret = "SYSTEM_ERROR";
            break;
        case SYSTEM_TIMEOUT:
            ret = "SYSTEM_TIMEOUT";
            break;
        case CMD_OUT_OF_RANGE:
            ret = "CMD_OUT_OF_RANGE";
            break;
        case CMD_CANCELLED:
            ret = "CMD_CANCELLED";
            break;
        case CMD_STARTED:
            ret = "CMD_STARTED";
            break;
        default:
            ret = "N/N";
    }
    return ret;
}

QString decoHearbeat(CANMsg* msg)
{

    QString  status = " ";
    switch (msg->data[0])
    {
        case HB_PRE_OPERATIONAL:
            status =  "PRE-OPERATIONAL";
        break;
        case HB_OPERATIONAL:
            status =  "OPERATIONAL";
        break;
        case HB_BOOTUP:
            status =  "BOOTUP";
        break;
    }

    return status;
}

void CANDecoder::setDataID (uint16_t dataID)
{
    this->dataID = dataID;
}

void CANDecoder::decodeMsg (CANMsg* msg)
{

    if(msg->can_id == dataID)
    {
        /*Decode data*/
    }

}
