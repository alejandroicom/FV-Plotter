#ifndef CANMODULE_H
#define CANMODULE_H


#include <stdint.h>

typedef struct
{
    uint8_t  dlc;
    uint16_t  can_id;
    uint8_t  data[8];
}CANMsg;

typedef enum
{
    BD250Kbps,
    BD800Kbps
}CANBaudRates;


class CanModule
{

public:
    CanModule();
    virtual bool initModule (CANBaudRates baudrate, int idDecive = 0) = 0;
    virtual bool writeCANMsg (CANMsg msg) = 0;
    virtual bool readCANMsg(CANMsg* msg) = 0;
};

#endif // CANMODULE_H
