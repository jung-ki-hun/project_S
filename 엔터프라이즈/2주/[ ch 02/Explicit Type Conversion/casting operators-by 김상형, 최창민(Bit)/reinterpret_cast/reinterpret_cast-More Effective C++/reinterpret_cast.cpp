#include <iostream>	
using namespace std;

typedef void (*FuncPtr)();

int doSomething() {  /*.....*/ return 0; }

void main()
{
	FuncPtr funcPtrArray[10];

	//funcPtrArray[0]=&doSomething;
	funcPtrArray[0]=reinterpret_cast<FuncPtr>(&doSomething);
	
}
