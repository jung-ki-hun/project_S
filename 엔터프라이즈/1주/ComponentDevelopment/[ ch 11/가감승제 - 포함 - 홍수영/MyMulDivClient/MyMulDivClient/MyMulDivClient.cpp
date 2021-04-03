// MyMulDivClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#import "..\..\MyMulDiv\MyMulDiv\Debug\MyMulDiv.tlb" no_namespace

int _tmain(int argc, _TCHAR* argv[])
{
    ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

    // IMyMulDiv

    IMyMulDivPtr pMyMulDiv(__uuidof(MyMulDiv));

    short result;

    pMyMulDiv->Mul(4, 2, &result);
    cout << result << endl;

    pMyMulDiv->Div(10, 2, &result);
    cout << result << endl;

    // IMyAddSub

    IMyAddSubPtr pMyAddSub(__uuidof(MyMulDiv));

    pMyAddSub->Add(2, 5, &result);
    cout << result << endl;

    pMyAddSub->Sub(10, 1, &result);
    cout << result << endl;

	return 0;
}

