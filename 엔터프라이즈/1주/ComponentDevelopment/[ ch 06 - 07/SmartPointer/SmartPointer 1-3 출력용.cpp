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

���� x�� � Ŭ������ instance pointer �̸� �� ������ �Ϲ����� 
��� ���õ���(member selection semantics)�� �Ѵ�. 
���� x�� � Ŭ������ instance �̸� Ŭ������ overload�� ��� �����Լ��� 
ã�´�. --> pISimpleSum.createInstance(); 

���� return ���� � Ŭ������ instance pointer �̸� �ش� Ŭ������ ����
�Ϲ����� member selection ������ ���Ѵ�. --> pISimpleSum->Sum();
����������� �̷� Ư���� ���þ� smart pointer�� �Ѵ�.

















//smpoint.cpp
#include<iostream.h>

#define _COM_SMARTPTR_TYPE(Interface) typedef _com_ptr_tem<Interface> (Interface##Ptr)

template <class T>
class _com_ptr_tem {
private:
	T* pI;
public: 
	_com_ptr_tem(){ CreateInstance();}  // ������ �Լ�
	void CreateInstance() 
	{ 
		pI=new T; 
		cout<<"O.K, Instance created. \n";
		//���� Client Program������ CoCreateInstance() �Լ��� ȣ���� 
		// ���⿡�� �̷�� ����.
	}
	T* operator->() { return pI; }
	void Addref(){ /* ATL �� ����� �� AddRef�� ȣ���Ѵ�  */ }
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
_com_ptr_t Ŭ������ smart pointer ����� ���� �ִ� Template Class��, 
COM interface pointer�� ĸ��ȭ�Ͽ� COM ��ü�� ���ο� �ν��Ͻ��� �����ϴ� 
CoCreateInstance �Լ��� IUnknown �������̽��� AddRef, Release, 
QueryInterface �Լ��� ����� Ŭ���� �ȿ� �������ν� �����ڵ��� ���ϰ� 
�������̽� �����͸� ����� �� �ְ� �Ѵ�. -- ������ p.199

