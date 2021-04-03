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
	sprintf(buf, "%s 씨 안녕하세요?", name);
	return buf;
}

char* CHello::sayGoodbye(char* name)
{
	sprintf(buf, "%s 씨 안녕히 가세요.", name);

	return buf;
}

IHello* CreateInstance()
{
	return (IHello*)new CHello;
}

IGoodbye* QueryInterface(IHello* p)
{
	CHello* pHello = (CHello*)p;
	return dynamic_cast<IGoodbye*>(pHello);
//	return (IGoodbye*)(pHello);
} 


//--------------------------------------

void SayHello(IHello* pHello);
void SayGoodbye(IGoodbye* pBye);

int main()
{
	IHello* pHello = CreateInstance();
	SayHello(pHello);
	
	//IGoodbye* pBye = (IGoodbye*)pHello;	
	// 마마! 이럴 수는 없사옵니다!!!
	// 마마! 이것도 아니되옵니다!!!
	//IGoodbye* pBye = dynamic_cast<IGoodbye*>(pHello);	
	// 2018.03.29 이게 된다 이제.....
	// 마마! 이러시면 컴파일러가 불평하옵니다!!!
	//IGoodbye* pBye = static_cast<IGoodbye*>(pHello);	
	
	/*
	CHello* pHello2 = (CHello*)pHello;
	IGoodbye* pBye = dynamic_cast<IGoodbye*>(pHello2);
	//*/
	/*
	CHello* pHello2 = static_cast<CHello*> (pHello);  //up
	IGoodbye* pBye = dynamic_cast<IGoodbye*>(pHello2); //down
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

	cout << "이름을 입력하세요 : ";
	cin >> name;
	message = pHello->sayHello(name);
	cout << message << endl;
}

void SayGoodbye(IGoodbye* pBye)
{
	char name[256];
	char* message;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	message = pBye->sayGoodbye(name);
	cout << message << endl;
}