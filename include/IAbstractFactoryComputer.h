#ifndef IAbstractFactoryComputer_H
#define IAbstractFactoryComputer_H

#include "IAbstarctProduct.h"

class IAbstractFactoryComputer
{
public:

	enum TYPE
	{
		LOW_END,
		HIGH_END
	};

	virtual IAbstarctProductProcessor* getProcessor()=0;
	virtual IAbstarctProductHdd* getHdd()=0;
	virtual IAbstarctProductMonitor* getMonitor()=0;
};

#endif //IAbstractFactoryComputer_H
