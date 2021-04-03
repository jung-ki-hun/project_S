#include<iostream.h>
class Base
{
public :
	virtual void Func1() { cout <<"Base::Func1\n"; }
	virtual void Func2() { cout <<"Base::Func2\n"; }
	virtual void Func3() 
	{ 
		cout <<"Base::Func3\n"; 
		//Func2();
	}
};

class Derived : public Base
{
public :
	void Func1() { cout <<"Derived::Func1\n"; }
	void Func2() { cout <<"Derived::Func2\n"; }
};

void main()
{
	Derived d1;
	Base* pBase=&d1;
	pBase->Func1();
	pBase->Func2();
	pBase->Func3();
}
