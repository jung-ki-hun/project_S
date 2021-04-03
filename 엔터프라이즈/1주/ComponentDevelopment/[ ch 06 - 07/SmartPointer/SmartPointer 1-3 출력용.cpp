//template.cpp
#include<iostream.h>

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

SimpleSum* ISimpleSumPtr::operator->()
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
	pISimpleSum.createInstance();
	pISimpleSum->Sum();
}

======= SmartPointer =======
x->func(), x.func()

만약 x가 어떤 클래스의 instance pointer 이면 이 문장은 일반적인 
멤버 선택동작(member selection semantics)을 한다. 
만약 x가 어떤 클래스의 instance 이면 클래스의 overload된 멤버 선택함수를 
찾는다. --> pISimpleSum.createInstance(); 

만약 return 값이 어떤 클래스의 instance pointer 이면 해당 클래스로 가서
일반적인 member selection 동작을 취한다. --> pISimpleSum->Sum();
멤버연산자의 이런 특성을 일컬어 smart pointer라 한다.

















//smpoint.cpp
#include<iostream.h>

#define _COM_SMARTPTR_TYPE(Interface) typedef _com_ptr_tem<Interface> (Interface##Ptr)

template <class T>
class _com_ptr_tem {
private:
	T* pI;
public: 
	_com_ptr_tem(){ CreateInstance();}  // 생성자 함수
	void CreateInstance() 
	{ 
		pI=new T; 
		cout<<"O.K, Instance created. \n";
		//기존 Client Program에서의 CoCreateInstance() 함수의 호출이 
		// 여기에서 이루어 진다.
	}
	T* operator->() { return pI; }
	void Addref(){ /* ATL 이 만들어 준 AddRef를 호출한다  */ }
	void Release(){  }
	void QueryInterface(){   }
};

class ISimpleSum {
public:
	void Sum(){ cout<<"O.K, ISimpleSum method - Sum() Called\n"; }
};

class ISimpleMul {
public:
	void Mul(){ cout<<"O.K, ISimpleMul method - Mul() Called\n"; }
};

void main()
{
	_COM_SMARTPTR_TYPE(ISimpleSum);
	_COM_SMARTPTR_TYPE(ISimpleMul);

	ISimpleSumPtr m_SimpleSum;
	m_SimpleSum->Sum();
		
	ISimpleMulPtr m_SimpleMul;
	m_SimpleMul->Mul();
}


=======================================================================
_com_ptr_t 클래스는 smart pointer 기능을 갖고 있는 Template Class로, 
COM interface pointer를 캡슐화하여 COM 개체의 새로운 인스턴스를 생성하는 
CoCreateInstance 함수나 IUnknown 인터페이스의 AddRef, Release, 
QueryInterface 함수의 기능을 클래스 안에 감춤으로써 개발자들이 편리하게 
인터페이스 포인터를 사용할 수 있게 한다. -- 전병선 p.199

