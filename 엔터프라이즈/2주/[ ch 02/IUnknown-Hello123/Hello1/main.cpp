#include "stdafx.h"
#include <iostream>
using namespace std;
 
class IHello  //interface keyword�� ���⼭�� error
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
	sprintf(buf, "%s �� �ȳ��ϼ���?", name);
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

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	message = pHello->sayHello(name);
	cout << message << endl;
}
