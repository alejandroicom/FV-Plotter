#ifndef _CAN_DECODER_H_
#define _CAN_DECODER_H_

#include <QObject>
#include "CanModule.h"

class CANDecoder : public QObject
{
    Q_OBJECT
public:
	CANDecoder();
	~CANDecoder();
    void decodeMsg (CANMsg* msg);


    void setModule(CanModule* canModule);
    /*FV-PLOTTER*/
    void setDataID (uint16_t dataID);

signals:
    void sendData(double, double, double, double);

private:
    CanModule* canModule;

    /*FV-PLOTTER*/

    uint16_t dataID;
};

#endif
