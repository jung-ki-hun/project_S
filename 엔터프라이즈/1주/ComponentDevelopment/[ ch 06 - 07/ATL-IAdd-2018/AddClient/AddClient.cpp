// AddClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:HelloServer.Hello.1" no_namespace
#import "C:\Users\student\Documents\Visual Studio 2013\Projects\AddServer\Debug\AddServer.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	try
	{
		IAddPtr plAdd(__uuidof(Add));

		_wsetlocale(LC_ALL, L"korean");

		int a, b;
		cout << "숫자를 입력하세요 : ";
		cin >> a >> b;

		cout << "두수의 합 : " << plAdd->Add(a, b) << endl;
	}
	catch (_com_error& e)
	{
		cout << e.ErrorMessage() << endl;
	}


	::CoUninitialize();
	return 0;
}

