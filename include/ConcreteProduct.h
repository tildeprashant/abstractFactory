#ifndef ConcreteProduct_H
#define ConcreteProduct_H

#include "IAbstarctProduct.h"

class ConcreteProductProcessorDualCore: public IAbstarctProductProcessor
{
	public:
		virtual void executeInstructions();
};

class ConcreteProductProcessorCeleron: public IAbstarctProductProcessor
{
	public:
		virtual void executeInstructions();
};

class ConcreteProductHddIde: public IAbstarctProductHdd
{
	public:
		virtual void storeData();
};

class ConcreteProductHddSata: public IAbstarctProductHdd
{
	public:
		virtual void storeData();
};

class ConcreteProductProductMonitorCrt: public IAbstarctProductMonitor
{
	public:
		virtual void displayGraphics();
};

class ConcreteProductProductMonitorTft: public IAbstarctProductMonitor
{
	public:
		virtual void displayGraphics();
};


#endif //ConcreteProduct_H