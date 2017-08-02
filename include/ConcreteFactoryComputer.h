#ifndef ConcreteFactoryComputer_H
#define ConcreteFactoryComputer_H

#include "IAbstractFactoryComputer.h"
#include "IAbstarctProduct.h"

#ifndef NULL
#define NULL (0)
#endif

class ConcreteFactoryComputerLowEnd: public IAbstractFactoryComputer
{
public:
	virtual IAbstarctProductProcessor* getProcessor();

	virtual IAbstarctProductHdd* getHdd();

	virtual IAbstarctProductMonitor* getMonitor();
	virtual ~ConcreteFactoryComputerLowEnd();
};

class ConcreteFactoryComputerHighEnd: public IAbstractFactoryComputer
{
public:
	virtual IAbstarctProductProcessor* getProcessor();

	virtual IAbstarctProductHdd* getHdd();

	virtual IAbstarctProductMonitor* getMonitor();
	virtual ~ConcreteFactoryComputerHighEnd();
};


#endif //ConcreteFactoryComputer_H