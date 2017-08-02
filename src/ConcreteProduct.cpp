#include <iostream>
#include "ConcreteProduct.h"

using namespace std;

void ConcreteProductProcessorDualCore::executeInstructions(){
	cout<<"Execute instructions Fast"<<endl;
	}

void ConcreteProductProcessorCeleron::executeInstructions(){
	cout<<"Execute instructions Slow"<<endl;
	}

void ConcreteProductHddIde::storeData(){
	cout<<"Store Data Slow"<<endl;
	}

void ConcreteProductHddSata::storeData(){
	cout<<"Store Data Fast"<<endl;
	}

void ConcreteProductProductMonitorCrt::displayGraphics(){
	cout<<"Display low resolution Graphics"<<endl;
	}

void ConcreteProductProductMonitorTft::displayGraphics(){
	cout<<"Display high resolution Graphics"<<endl;
	}