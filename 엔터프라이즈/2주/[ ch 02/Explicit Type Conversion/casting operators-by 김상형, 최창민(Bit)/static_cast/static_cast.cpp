#include <stdio.h>
/*
void main()
{
	char *str="korea";
	int *pi;
	double d=123.456;
	int i;
	
	i=static_cast<int>(d);                  // ����
	pi=static_cast<int *>(str);            // ����
	pi=(int *)str;                          // ����
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
		
	pP=static_cast<Parent *>(&C);         // ����
	pC=static_cast<Child *>(&P);      // ���������� ����
	pP=static_cast<Parent *>(&i);     // ����
	pC=static_cast<Child *>(&i);       // ����
}
//*/
