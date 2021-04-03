#include <stdio.h>

class Parent
{
public:
	virtual void PrintMe() { printf("I am Parent\n"); }
};

class Child : public Parent
{
private:
	int num;
	
public:
	Child(int anum=1234) : num(anum) { }
	virtual void PrintMe() { printf("I am Child\n"); }
	void PrintNum() { printf("Hello Child=%d\n",num); }
};

void main()
{
	Parent P,*pP,*pP2;
	Child C,*pC,*pC2;
	pP=&P;
	pC=&C;
	
	pP2=dynamic_cast<Parent *>(pC);       // 업 캐스팅-항상 안전하다.
	pC2=dynamic_cast<Child *>(pP2);       // 다운 캐스팅, pP2는 실제 Child Class의 Instance Pointer
	printf("pC2 = %p\n",pC2);
	pC2=dynamic_cast<Child *>(pP);      // 캐스팅 불가능- NULL return
	//pC2=static_cast<Child *>(pP);         // 일단 캐스팅 가능   
	//pC2->PrintNum(); //error는 안나면서 안됨 
	printf("pC2 = %d\n",pC2);
}


/* If you meet error message, "warning C4541: 'dynamic_cast' used on polymorphic type
   'class Parent' with /GR-; unpredictable behavior may result,
   Check option, "Enable Run-Time Type Information(RTTI)"
*/

/* To find this option in the development environment, 
   click Settings on the Project menu. Then click the C/C++ tab, 
   and click C++ Language in the Category box. 
*/


