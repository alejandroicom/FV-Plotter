#ifndef CANMANAGER_H
#define CANMANAGER_H

#include <QObject>
#include "CanModule.h"
#include <QThread>

#include "CANDecoder.h"
#include "CANEncoder.h"

typedef enum
{
    SystecCAN,
    PeakCAN
}CANModuleType;

class MainCanManager : public QThread
{
    Q_OBJECT
public:
    explicit MainCanManager();
    void setModule(CANModuleType moduleType);
    bool init(void);
    void setBaudRate(CANBaudRates baudrate);
    void setCANidDevice(uint8_t id);


signals:


private:


    void run (void);




    //CANBaudRates baudrate;
    CANModuleType moduleType;
    CanModule* canModule;
    uint8_t id;
    CANBaudRates baudrate;

    bool threadLive;
    CANDecoder decoder;
    CANEncoder encoder;

};

#endif // CANMANAGER_H
