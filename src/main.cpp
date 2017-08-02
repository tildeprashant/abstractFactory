
#include "ConcreteFactoryComputer.h"


class ComputerShop
{
	IAbstractFactoryComputer::TYPE computerType;
	IAbstractFactoryComputer* myComputer;
public:
	ComputerShop(IAbstractFactoryComputer::TYPE _coputerType):computerType(_coputerType){}

	virtual ~ComputerShop()
	{
		if(	this->getComputer()!=NULL )
			delete this->getComputer();

	}



	IAbstractFactoryComputer* getComputer()
	{
		IAbstractFactoryComputer* myComputer;
		switch(computerType)
		{
			case IAbstractFactoryComputer::LOW_END:
				myComputer= new ConcreteFactoryComputerLowEnd;
				break;
			case IAbstractFactoryComputer::HIGH_END:
				myComputer= new ConcreteFactoryComputerHighEnd;
				break;
			default:
				break;
		}
		return myComputer;
	}
};

int main()
{
	ComputerShop shop1(IAbstractFactoryComputer::LOW_END);
	ComputerShop shop2(IAbstractFactoryComputer::HIGH_END);

	shop1.getComputer()->getProcessor()->executeInstructions();
	shop2.getComputer()->getProcessor()->executeInstructions();

	shop1.getComputer()->getHdd()->storeData();
	shop2.getComputer()->getHdd()->storeData();

	shop1.getComputer()->getMonitor()->displayGraphics();
	shop2.getComputer()->getMonitor()->displayGraphics();

	return 0;
}





	
