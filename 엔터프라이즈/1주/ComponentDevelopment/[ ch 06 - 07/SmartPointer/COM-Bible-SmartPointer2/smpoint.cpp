#include<iostream.h>

#define _COM_SMARTPTR_TYPE(Interface) typedef _com_ptr_tem<Interface> (Interface##Ptr)

template <class T>
class _com_ptr_tem {
private:
	T* pI;
public: 
	_com_ptr_tem(){ };
	void CreateInstance() 
	{ 
		pI=new T; 
		cout<<"O.K, Instance created. \n";
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
	m_SimpleSum.CreateInstance();
	m_SimpleSum->Sum();
		
	ISimpleMulPtr m_SimpleMul;
	m_SimpleMul.CreateInstance();
	m_SimpleMul->Mul();
}

