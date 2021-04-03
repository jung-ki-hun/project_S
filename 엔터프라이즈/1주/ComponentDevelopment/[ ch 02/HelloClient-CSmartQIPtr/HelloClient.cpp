// HelloClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
//#include "SmartPtr.h"
#include "SmartQIPtr.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;
	
	hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if(hr != S_OK) {
		cout << "초기화할 수 없습니다!" << endl;
		return 0;
	}
	
	CLSID clsid;
	
	hr = ::CLSIDFromProgID(L"HelloServer.Hello.1", &clsid);
	if(hr != S_OK) {
		cout << "레지스트리에 등록되지 않았습니다!" << endl;
		return 0;
	}
	
	IUnknown* pUnk = NULL;
	    
	hr = ::CoCreateInstance(clsid, NULL, CLSCTX_ALL,
						IID_IUnknown, (void**)&pUnk);
	if(hr != S_OK) {
		cout << "인스턴스를 생성할 수 없습니다!" << endl;
		return 0;
	}

//--------------- CSmartQIPtr Template Class 사용------------	

	CSmartQIPtr<IHello, &IID_IHello> pIHello; //= pUnk;  //대입연산자

	pIHello = pUnk;

	wchar_t* message = NULL;
	wchar_t* name;
	char buffer[256];
	cout << "이름을 입력하세요 : ";
	cin >> buffer;
	name = (wchar_t*)buffer;

	hr = pIHello->sayHello(name, &message);
	if(hr != S_OK) {
		cout << "메서드를 호출할 수 없습니다!" << endl;
		return 0;
	}
	cout << (char*)message << endl;
	
	::CoTaskMemFree((LPVOID)message);
	return 0;
}

//------------------Smart Pointer 사용 예 ------------------------------------
/*

void Foo2(IUnknown* pUnk)
{
	HRESULT hr;

}	

*/