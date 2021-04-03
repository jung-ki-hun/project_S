#include<iostream>
using namespace std;

#define _COM_SMARTPTR_TYPE(Interface) typedef _com_ptr_tem<Interface> (Interface##Ptr)

template <class T>
class _com_ptr_tem {
private:
	T* pI;
public: 
	_com_ptr_tem(){ CreateInstance();} // 생성자 함수
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

