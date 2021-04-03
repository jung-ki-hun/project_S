#include<iostream>
using namespace std;

#define _COM_SMARTPTR_TYPE(Interface) typedef _com_ptr_tem<Interface> (Interface##Ptr)

template <class T>
class _com_ptr_tem {
private:
	T* pI;
public: 
	_com_ptr_tem(){ CreateInstance();} // ������ �Լ�
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
	//_COM_SMARTPTR_TYPE(ISimpleSum);
	typedef _com_ptr_tem<ISimpleSum> ISimpleSumPtr;
	_COM_SMARTPTR_TYPE(ISimpleMul);

	ISimpleSumPtr m_SimpleSum;
//	m_SimpleSum.CreateInstance();
	m_SimpleSum->Sum();
		
	ISimpleMulPtr m_SimpleMul;
//	m_SimpleMul.CreateInstance();
	m_SimpleMul->Mul();
}

