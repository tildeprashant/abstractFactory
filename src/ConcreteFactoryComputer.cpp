
#include "ConcreteFactoryComputer.h"
#include "ConcreteProduct.h"


IAbstarctProductProcessor* ConcreteFactoryComputerLowEnd::getProcessor(){
	return new ConcreteProductProcessorCeleron;
	}

IAbstarctProductHdd* ConcreteFactoryComputerLowEnd::getHdd(){
	return new ConcreteProductHddIde;
	}

IAbstarctProductMonitor* ConcreteFactoryComputerLowEnd::getMonitor(){
	return new ConcreteProductProductMonitorCrt;
	}

IAbstarctProductProcessor* ConcreteFactoryComputerHighEnd::getProcessor(){
	return new ConcreteProductProcessorDualCore;
	}

IAbstarctProductHdd* ConcreteFactoryComputerHighEnd::getHdd(){
		return new ConcreteProductHddSata;
	}

IAbstarctProductMonitor* ConcreteFactoryComputerHighEnd::getMonitor(){
	return new ConcreteProductProductMonitorTft;
	}

ConcreteFactoryComputerLowEnd::~ConcreteFactoryComputerLowEnd()
{
	if(this->getProcessor() !=NULL)
		delete this->getProcessor();

	if(this->getHdd() !=NULL)
		delete this->getHdd();

	if(this->getMonitor() !=NULL)
		delete this->getMonitor();
}

ConcreteFactoryComputerHighEnd::~ConcreteFactoryComputerHighEnd()
{
	if(this->getProcessor() !=NULL)
		delete this->getProcessor();

	if(this->getHdd() !=NULL)
		delete this->getHdd();

	if(this->getMonitor() !=NULL)
		delete this->getMonitor();
}

