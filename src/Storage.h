#ifndef STORAGE_H_
#define STORAGE_H_

#include "SimpleCharge.h"

class Storage : public ChargingStrategy {
public:
	enum State  {Charge, Discharge, Balance};

	AnalogInputs::ValueType V_;
	State state;

	Storage(){}
	virtual void powerOn();
	virtual statusType doStrategy();
	virtual void powerOff();
	void setVI(AnalogInputs::ValueType V, AnalogInputs::ValueType I);
};

extern Storage storage;


#endif /* STORAGE_H_ */
