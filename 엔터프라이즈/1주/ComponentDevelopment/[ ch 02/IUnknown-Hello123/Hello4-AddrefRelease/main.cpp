#include "stdafx.h"
#include <iostream>
using namespace std;

/// COM Component Source 흉내
enum IID
{
	IID_IUnknown,
	IID_IHello,
	IID_IGoodbye
};

class IUnknown
{
public:
	virtual bool QueryInterface(IID iid, void** ppv) = 0;
	virtual int AddRef() = 0;
	virtual int Release() = 0;
};

class IHello : public IUnknown
{
public:
	virtual char* sayHello(char* name) = 0;
};

class IGoodbye : public IUnknown
{
public:
	virtual char* sayGoodbye(char* name) = 0;
};

extern IUnknown* CreateInstance();

//==============================================------------------
class CHello : public IHello,
			   public IGoodbye
{
public:
	CHello(void);
	// IUnknown 인터페이스 메서드
	bool QueryInterface(IID iid, void** ppv);
	int AddRef(void);
	int Release(void);
	// IHello 및 IGoodbye 인터페이스 메서드
	char* sayHello(char* name);
	char* sayGoodbye(char* name);
private:
	char buf[256];
	int m_cref;		// 참조 카운터
};


//==============================================------------------

CHello::CHello(void) : m_cref(0)
{
}

bool CHello::QueryInterface(IID iid, void** ppv)
{
	*ppv = 0;
	if(iid == IID_IUnknown)
		*ppv = (IUnknown*)(IHello*)this;
	else
	if(iid == IID_IHello)
		*ppv = (IHello*)this;
	else
	if(iid == IID_IGoodbye)
		*ppv = (IGoodbye*)this;	

	if(*ppv != 0) {
		((CHello*)*ppv)->AddRef();
		return true;
	}
	return false;
}

int CHello::AddRef(void)
{
	return ++m_cref;
}

int CHello::Release(void)
{
	if(--m_cref == 0)
		delete this;
	return m_cref;
}

char* CHello::sayHello(char* name)
{
	sprintf(buf, "%s 씨 안녕하세요?", name);
	return buf;
}

char* CHello::sayGoodbye(char* name)
{
	sprintf(buf, "%s 씨 안녕히 가세요.", name);

	return buf;
}

IUnknown* CreateInstance()
{
	CHello* pHello = new CHello;
	IUnknown* pUnk = 0;
	pHello->QueryInterface(IID_IUnknown, (void**)&pUnk);
	return pUnk;
}



//COM Client Source

//==============================================------------------

//void SayHello(IHello* pHello);
//void SayGoodbye(IGoodbye* pBye);

int main()
{
	char name[256];
	char* message;
	IUnknown* pUnk = CreateInstance();
	
	IHello* pHello;
	pUnk->QueryInterface(IID_IHello, (void**)&pHello);
	pUnk->Release();

	cout << "이름을 입력하세요 : ";
	cin >> name;
	message = pHello->sayHello(name);
	cout << message << endl;
	
	IGoodbye* pBye;
	pHello->QueryInterface(IID_IGoodbye, (void**)&pBye);
	pHello->Release();

	cout << "이름을 입력하세요 : ";
	cin >> name;
	message = pBye->sayGoodbye(name);
	cout << message << endl;
	pBye->Release();
	return 0;
}


