#include "stdafx.h"
#include <iostream>
using namespace std;
 
class IHello  //interface keyword는 여기서는 error
{
public:
	virtual char* sayHello(char* name) = 0;
};

extern IHello* CreateInstance();

//--------------------------------------
class CHello : public IHello 
{
public:
	char* sayHello(char* name);
private:
	char buf[256];
};

//--------------------------------------

char* CHello::sayHello(char* name)
{
	sprintf(buf, "%s 씨 안녕하세요?", name);
	return buf;
}

IHello* CreateInstance()
{
	return (IHello*)new CHello;
}

//--------------------------------------

void SayHello(IHello* pHello);

int main()
{
	IHello* pHello = CreateInstance();
	SayHello(pHello);
	delete pHello;
	return 0;
}

void SayHello(IHello* pHello)
{
	char name[256];
	char* message;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	message = pHello->sayHello(name);
	cout << message << endl;
}
