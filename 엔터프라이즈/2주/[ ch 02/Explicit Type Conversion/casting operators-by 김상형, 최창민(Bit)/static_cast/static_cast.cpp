#include <stdio.h>
/*
void main()
{
	char *str="korea";
	int *pi;
	double d=123.456;
	int i;
	
	i=static_cast<int>(d);                  // 가능
	pi=static_cast<int *>(str);            // 에러
	pi=(int *)str;                          // 가능
}
//*/

//*
class Parent { };
class Child : public Parent { };

void main()
{
	Parent P,*pP;
	Child C,*pC;
	int i=1;
		
	pP=static_cast<Parent *>(&C);         // 가능
	pC=static_cast<Child *>(&P);      // 가능하지만 위험
	pP=static_cast<Parent *>(&i);     // 에러
	pC=static_cast<Child *>(&i);       // 에러
}
//*/
