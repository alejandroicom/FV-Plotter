#ifndef SYSTENCANMODULE_H
#define SYSTENCANMODULE_H

//#define NOMINMAX
#include <Windows.h>
#include "Usbcan32.h"
#include "UsbCanLs.h"
#include "UsbCanUp.h"
#include <stdint.h>

#include "CanModule.h"
class SystecCANModule : public CanModule
{
public:
    SystecCANModule();
    bool initModule (CANBaudRates baudrate, int idDevice);
    bool writeCANMsg (CANMsg msg);
    bool readCANMsg(CANMsg* msg);

private:
    bool initInterface(void);
	static void STDCALL callbackFunc (tUcanHandle UcanHandle, BYTE canEvent);
	tUcanHandle UcanHandle;
	uint16_t systecBaudarate;
	uint16_t amr;
	uint16_t acr;
    uint8_t idDevice;
};

#endif // SYSTENCANMODULE_H
