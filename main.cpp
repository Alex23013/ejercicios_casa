#include "car.h"
#include "trcuk.h"
#include <iostream>
using namespace std;

int main(){
	Car c("MC Donals =P",2093)
	Vehicle *vPtr = &c;
	cout<< vPtr->getDesc();
}
