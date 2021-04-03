// Client.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:HelloServer.Hello.1" no_namespace
#import "..\..\CSyhStat\CSyhStat\Debug\CSyhStat.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

    try
    {
        _wsetlocale(LC_ALL, L"korean");

        // Stat
        IStatPtr pIStat(__uuidof(Stat));
        
        data dataInput = { 2, 5, 8, 12, 15, 17, 18, 22, 23, 27 };

        double meanResult;
        pIStat->mean(dataInput, &meanResult);
        cout << "meanResult: " << meanResult << endl;

        double varianceResult;
        pIStat->variance(dataInput, &varianceResult);
        cout << "varianceResult: " << varianceResult << endl;

        // Clsid
        IClsidPtr pIClsid(__uuidof(Clsid));

        unsigned short *message;
        pIClsid->getclsid(&message);

        /*for (int i = 0 ; message[i] != '\0' ; i++)
        {
            //printf("%c
        }*/

        _tprintf(L"%s\n", (wchar_t *)message);

//        cout << message << endl;
    }
    catch (_com_error & e)
    {
        cout << e.ErrorMessage() << endl;
    }

    ::CoUninitialize();

	return 0;
}

