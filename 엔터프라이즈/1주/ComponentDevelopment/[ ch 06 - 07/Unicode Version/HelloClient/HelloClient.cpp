// HelloClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:HelloServer.Hello.1" no_namespace
#import "..\HelloServer\HelloServer\Debug\HelloServer.tlb" no_namespace
// #import "C:\Users\E527\Desktop\MyHelloServer\Debug\MyHelloServer.tlb" no_namespace //바로 절대경로 사용


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	try {
		IHelloPtr pIHello(__uuidof(Hello));

		_wsetlocale(LC_ALL, L"korean");

		wchar_t * message = NULL;
		wchar_t * name;
		wchar_t buffer[256];
		cout << "이름을 입력하세요 : ";
		//cin >> buffer;
		wscanf(L"%s", buffer);
		name = (wchar_t *)buffer;

		
		//pIHello->sayHello(name, &message);
		pIHello->sayHello((unsigned short *)name, (unsigned short **)&message);

		//wsetlocale(LC_ALL, _T("korean"));
		//_tprintf("한글\n");

		wcout << (wchar_t *)message << endl;
		//wprintf(L"%s\n", message);
		//cout << (wcharmessage << endl;
/*
		cout << "이름을 저장합니다." << endl;
		pIHello->name = _com_util::ConvertStringToBSTR((char*)name);
		cout << "이름을 읽습니다." << endl;
		name = (wchar_t*)_com_util::ConvertBSTRToString(pIHello->name);
		cout << "읽어온 이름 : " << (char*)name << endl;
	*/	
		::CoTaskMemFree((LPVOID)message);
	}
	catch(_com_error& e) {
		cout << e.ErrorMessage() << endl;
	}


	::CoUninitialize();

	return 0;
}

