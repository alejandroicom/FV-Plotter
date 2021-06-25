#include "CANEncoder.h"

CANEncoder::CANEncoder()
{

}
CANEncoder::~CANEncoder()
{

}


void CANEncoder::setModule(CanModule* canModule)
{
    this->canModule = canModule;
}


void CANEncoder::sendNMTMsg(NMTMsg nmtMsg, uint16_t nodeID )
{
    CANMsg msg;
    msg.can_id = NMT_MSG_ID;
    msg.dlc = 2;
    msg.data[0] = (uint8_t)nmtMsg;
    msg.data[0] = nodeID;
    this->canModule->writeCANMsg(msg);
}
