#include<iostream>
using namespace std;

class SimpleSum;

class ISimpleSumPtr {

private:
	SimpleSum * pI;
public: 
	ISimpleSumPtr();
	ISimpleSumPtr(SimpleSum* ISimpleSum){ pI=ISimpleSum;}
	void createInstance() { cout<<"O.K, Instance created\n";}
	SimpleSum* operator->();
};

SimpleSum* ISimpleSumPtr::operator->()  //operator overloading
{
	return pI; 
}


class SimpleSum {
public:
	void Sum(){ cout<<"O.K, Sum Called\n"; }
};




void main()
{
	SimpleSum a;
	ISimpleSumPtr pISimpleSum(&a);
	
	//ISimpleSumPtr *p; 
	//p = &pISimpleSum;
	//p->createInstance();

	pISimpleSum.createInstance();
	pISimpleSum->Sum();
}
