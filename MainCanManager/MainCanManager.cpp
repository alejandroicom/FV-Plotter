#include "MainCanManager.h"
#include "PeakCANModule.h"
#include "SystecCANModule.h"

#include <QDebug>
#include <QString>
#include <QTime>

#define CAN_POS Q6_FACTOR
#define CAN_VEL Q10_FACTOR
#define CAN_RAMP Q10_FACTOR
#define CAN_CURRENT Q10_FACTOR

MainCanManager::MainCanManager()
{
    this->baudrate = BD250Kbps;
    this->canModule = NULL;
    this->id = 0; /*CAN intraface id*/

    /*Thread*/
    this->threadLive=true;
}

void MainCanManager::setBaudRate(CANBaudRates baudrate)
{
    this->baudrate = baudrate;

}

void MainCanManager::setCANidDevice(uint8_t id)
{
    this->id = id;
}

void MainCanManager::setModule(CANModuleType moduleType)
{
    this->moduleType = moduleType;
}

bool MainCanManager::init(void)
{

    bool ret =false;
    switch (moduleType)
    {
        case SystecCAN:

            canModule = new SystecCANModule();
            break;
        case PeakCAN:
            canModule = new PeakCANModule();
            break;
        default:
            canModule = new PeakCANModule();/*DEFAULT*/
            break;
    }

    ret = canModule->initModule(this->baudrate,this->id);

    if (ret)
    {
        encoder.setModule(canModule);
        decoder.setModule(canModule);
    }

    return ret;
}


void MainCanManager::run (void)
{
    CANMsg msg;
    threadLive = true;
    while (threadLive)
    {
        if (canModule->readCANMsg(&msg))
        {
            //decodeMsg(&msg);
        }
    }
}







