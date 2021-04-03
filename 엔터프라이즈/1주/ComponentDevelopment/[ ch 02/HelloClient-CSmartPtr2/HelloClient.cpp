// HelloClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		cout << "�ʱ�ȭ�� �� �����ϴ�!" << endl;
		return 0;
	}
	
	CLSID clsid;
	
	hr = ::CLSIDFromProgID(L"HelloServer.Hello.1", &clsid);
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

//--------------- CSmartPtr Template Class ���------------	

	//---------- p. 97 �ϴ� ---------
	CSmartPtr<IHello> pIHello;
	
	hr = pUnk->QueryInterface(IID_IHello, (void**)&pIHello);
	if(hr != S_OK)
		return 0;

	wchar_t* message = NULL;
	wchar_t* name;
	char buffer[256];
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> buffer;
	name = (wchar_t*)buffer;

	hr = pIHello->sayHello(name, &message);
	if(hr != S_OK) {
		cout << "�޼��带 ȣ���� �� �����ϴ�!" << endl;
		return 0;
	}
	cout << (char*)message << endl;
	
	::CoTaskMemFree((LPVOID)message);
 
	//---------- p. 98 ��� ---------
	/*     
	IHello* ppHello;
	hr = pUnk->QueryInterface(IID_IHello, (void**)&ppHello);
	CSmartPtr<IHello> pIHello2; 
	pIHello2= ppHello;  //ġȯ(����) ������ ȣ�� 1
	//*/  
	
	
	//*	
	CSmartPtr<IHello> pIHello2;
	pIHello2 = pIHello;  //ġȯ(����) ������ ȣ�� 2
	//*/


	//---------- p. 96 �߰� ��������� ȣ�� ----
	// ��������ڸ� �����ϸ� ��ü�� �ٸ� ��ü�� �ʱ�ȭ�ϴµ� 
	// ���� ������ ���� �����ڰ� ȣ��ȴ�. 
	// ġȯ���꿡�� ���� �����ڰ� ������ ��ġ�� �ʴ´�.
	
	//CSmartPtr<IHello> pIHello2= pIHello;

	hr = pIHello2->sayHello(name, &message);
	if(hr != S_OK) {
		cout << "�޼��带 ȣ���� �� �����ϴ�!" << endl;
		return 0;
	}
	cout << (char*)message << endl;
	
	::CoTaskMemFree((LPVOID)message);
	return 0;
}

//------------------Smart Pointer ��� �� ------------------------------------
/*

void Foo2(IUnknown* pUnk)
{
	HRESULT hr;
	CSmartQIPtr<IHello, &IID_IHello> pIHello = pUnk;

	wchar_t* message = NULL;
	wchar_t* name;
	char buffer[256];
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> buffer;
	name = (wchar_t*)buffer;

	hr = pIHello->sayHello(name, &message);
	if(hr != S_OK) {
		cout << "�޼��带 ȣ���� �� �����ϴ�!" << endl;
		return;
	}
	cout << (char*)message << endl;
	
	::CoTaskMemFree((LPVOID)message);
}	

*/