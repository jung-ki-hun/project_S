// HelloClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "SmartPtr.h"
//#include "SmartQIPtr.h"

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

//--------------- CSmartPtr Template Class 사용------------	

	//---------- p. 97 하단 ---------
	CSmartPtr<IHello> pIHello;
	
	hr = pUnk->QueryInterface(IID_IHello, (void**)&pIHello);
	if(hr != S_OK)
		return 0;

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
 
	//---------- p. 98 상단 ---------
	/*     
	IHello* ppHello;
	hr = pUnk->QueryInterface(IID_IHello, (void**)&ppHello);
	CSmartPtr<IHello> pIHello2; 
	pIHello2= ppHello;  //치환(대입) 연산자 호출 1
	//*/  
	
	
	/*	
	CSmartPtr<IHello> pIHello2;
	pIHello2 = pIHello;  //치환(대입) 연산자 호출 2, 현재로서는 불가. Hello..._CSmartPtr2 참고
	//*/


	//*     
	IHello* pHello;
	hr = pUnk->QueryInterface(IID_IHello, (void**)&pHello);
	CSmartPtr<IHello> pIHello2=pHello;   // 생성자함수 호출 [생성자 함수 인자 전달 폴더 참고]
	
	//*/  

	//---------- p. 96 중간 복사생성자 호출 ----
	// 복사생성자를 정의하면 객체가 다른 객체를 초기화하는데 
	// 사용될 때마다 복사 생성자가 호출된다. 
	// 치환연산에는 복사 생성자가 영향을 끼치지 않는다.
	
	//CSmartPtr<IHello> pIHello2= pIHello;

	hr = pIHello2->sayHello(name, &message);
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
	CSmartQIPtr<IHello, &IID_IHello> pIHello = pUnk;

	wchar_t* message = NULL;
	wchar_t* name;
	char buffer[256];
	cout << "이름을 입력하세요 : ";
	cin >> buffer;
	name = (wchar_t*)buffer;

	hr = pIHello->sayHello(name, &message);
	if(hr != S_OK) {
		cout << "메서드를 호출할 수 없습니다!" << endl;
		return;
	}
	cout << (char*)message << endl;
	
	::CoTaskMemFree((LPVOID)message);
}	

*/