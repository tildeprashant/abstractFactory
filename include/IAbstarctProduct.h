#ifndef IAbstarctProduct_H
#define IAbstarctProduct_H

class IAbstarctProductProcessor
{
public:
	virtual void executeInstructions()=0;
};

class IAbstarctProductHdd
{
public:
	virtual void storeData()=0;
};

class IAbstarctProductMonitor
{
public:
	virtual void displayGraphics()=0;
};


#endif //IAbstarctProduct_H