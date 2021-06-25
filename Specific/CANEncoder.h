#ifndef _CAN_ENCODER_H_
#define _CAN_ENCODER_H_

#include <QObject>
#include "CanModule.h"
#include "ODMapping.h"

class CANEncoder : public QObject
{
	Q_OBJECT
public:
	CANEncoder();
	~CANEncoder();

    void setModule(CanModule* canModule);
    void sendNMTMsg(NMTMsg msg, uint16_t nodeID );
	/* data */
private:
    CanModule* canModule;
};

#endif
