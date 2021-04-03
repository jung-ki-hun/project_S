// LGH_CLI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	HRESULT hr;
	
	hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if(hr != S_OK) {
		cout << "초기화할 수 없습니다!" << endl;
		return 0;
	}
	
	CLSID clsid;
	
// 	hr = ::CLSIDFromProgID(L"HelloServer.Hello.1", &clsid);
// 	if(hr != S_OK) {
// 		cout << " 레지스트리에 등록되지 않았습니다!" << endl;
// 	}

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
	
	IUDist* pHello = NULL;
	
	hr = pUnk->QueryInterface(IID_IUDist, (void**)&pHello);
	if(hr != S_OK) {
		cout << "IUDist 인터페이스를 구할 수 없습니다!" << endl;
		return 0;
	}
	
	pUnk->Release();
	
	wchar_t* pszResult = NULL;

	hr = pHello->udistance(4,7,9,3,10,15,8,9, &pszResult);
	if ( hr != S_OK )
	{
		cout << "메서드를 호출할 수 없습니다!" << endl;
		return 0;
	}


	cout << (char*)pszResult << endl;
	::CoTaskMemFree((LPVOID)pszResult);


	
	pHello->Release();

	::CoUninitialize();
	
	return 0;
}
