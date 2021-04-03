#include "stdafx.h"
#include <iostream>
using namespace std;
class IHello
{
public:
	virtual char* sayHello(char* name) = 0;
};

class IGoodbye
{
public:
	virtual char* sayGoodbye(char* name) = 0;
};


extern IHello* CreateInstance();

//--------------------------------------
class CHello : public IHello, 
			   public IGoodbye 
{
public:
	char* sayHello(char* name);
	char* sayGoodbye(char* name);

private:
	char buf[256];
};

//--------------------------------------

char* CHello::sayHello(char* name)
{
	sprintf(buf, "%s �� �ȳ��ϼ���?", name);
	return buf;
}

char* CHello::sayGoodbye(char* name)
{
	sprintf(buf, "%s �� �ȳ��� ������.", name);

	return buf;
}

IHello* CreateInstance()
{
	return (IHello*)new CHello;
}

IGoodbye* QueryInterface(IHello* p)
{
	CHello* pHello = dynamic_cast<CHello*>(p);  // Down casting
	return static_cast<IGoodbye*>(pHello); // Up casting �׻� �����ϴ�. 
	// ���� �����ϰ�, ���������, �ǵ������� casting �ϰ� �ֽ��ϴ�.
//	return (IGoodbye*)(pHello);
} 


//--------------------------------------

void SayHello(IHello* pHello);
void SayGoodbye(IGoodbye* pBye);

int main()
{
	IHello* pHello = CreateInstance();
	SayHello(pHello);
	
	//IGoodbye* pBye = (IGoodbye*)pHello;		// ����! �̷� ���� ����ɴϴ�!!!
	// ����! �̰͵� �ƴϵǿɴϴ�!!!
	//IGoodbye* pBye = dynamic_cast<IGoodbye*>(pHello);	
	// ����! �̷��ø� �����Ϸ��� �����Ͽɴϴ�!!!
	//IGoodbye* pBye = static_cast<IGoodbye*>(pHello);	
	
	/*
	CHello* pHello2 = (CHello*)pHello;
	IGoodbye* pBye = dynamic_cast<IGoodbye*>(pHello2);
	//*/

	IGoodbye* pBye = QueryInterface(pHello);
	SayGoodbye(pBye);
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

void SayGoodbye(IGoodbye* pBye)
{
	char name[256];
	char* message;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	message = pBye->sayGoodbye(name);
	cout << message << endl;
}