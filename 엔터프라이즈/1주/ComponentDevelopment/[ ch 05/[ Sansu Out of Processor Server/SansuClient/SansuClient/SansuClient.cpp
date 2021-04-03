// SansuClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;
	
	hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if(hr != S_OK) {
		cout << "�ʱ�ȭ�� �� �����ϴ�!" << endl;
		return 0;
	}
	
	CLSID clsid;
	
	hr = ::CLSIDFromProgID(L"SansuServer.Sansu.1", &clsid);
	if(hr != S_OK) {
		cout << "������Ʈ���� ��ϵ��� �ʾҽ��ϴ�!" << endl;
		return 0;
	}
	
	IUnknown* pUnk = NULL;
	    
	hr = ::CoCreateInstance(clsid, NULL, CLSCTX_ALL,
						IID_IUnknown, (void**)&pUnk);
	if(hr != S_OK) {
		cout << "�ν��Ͻ��� ������ �� �����ϴ�!" << endl;
		return 0;
	}
	
	ISansu* pSansu = NULL;
	
	hr = pUnk->QueryInterface(IID_ISansu, (void**)&pSansu);
	if(hr != S_OK) {
		cout << "ISansu �������̽��� ���� �� �����ϴ�!" << endl;
		return 0;
	}
	
	pUnk->Release();
	
	int result;	
	hr = pSansu->Add(325, 5, &result);
	if(hr != S_OK) {
		cout << "�޼��带 ȣ���� �� �����ϴ�!" << endl;
		return 0;
	}
	cout <<result << endl;
	
	pSansu->Release();

	::CoUninitialize();
	
	return 0;
}

