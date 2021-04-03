// SansuClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include "stdafx.h"
#include <iostream>

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
	
	hr = ::CLSIDFromProgID(L"SansuServer.Sansu.1", &clsid);
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
	
	ISansu* pSansu = NULL;
	
	hr = pUnk->QueryInterface(IID_ISansu, (void**)&pSansu);
	if(hr != S_OK) {
		cout << "IHello 인터페이스를 구할 수 없습니다!" << endl;
		return 0;
	}
	
	pUnk->Release();
	
	int result;	
	hr = pSansu->Add(325, 6, &result);
	if(hr != S_OK) {
		cout << "메서드를 호출할 수 없습니다!" << endl;
		return 0;
	}
	cout <<result << endl;
	
	pSansu->Release();

	::CoUninitialize();
	
	return 0;
}

