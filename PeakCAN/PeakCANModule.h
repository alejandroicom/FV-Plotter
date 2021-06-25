#ifndef PEAKCANMODULE_H
#define PEAKCANMODULE_H

#include "CanModule.h" // interfaz
#include "PCANBasic.h" //specific

class PeakCANModule : public CanModule
{
public:
    PeakCANModule();
    bool initModule (CANBaudRates baudrate, int idDevice);
    bool writeCANMsg (CANMsg msg);
    bool readCANMsg(CANMsg* msg);

private:
    uint16_t idDevice;
};

#endif // PEAKCANMODULE_H
