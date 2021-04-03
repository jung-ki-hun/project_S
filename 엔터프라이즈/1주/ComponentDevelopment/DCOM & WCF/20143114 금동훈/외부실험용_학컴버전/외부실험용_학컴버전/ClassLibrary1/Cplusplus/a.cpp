#include<iostream>
#include <string>
#include<locale.h>
#include <cstdlib>

#import "..\ClassLibrary1\bin\Debug\ClassLibrary1.tlb"

using namespace ClassLibrary1;
using namespace std;
void main()
{
	CoInitialize(NULL);

	ClassLibrary1::Interface1Ptr ptr(__uuidof(Class1));
	

	LPCWSTR input;
	wstring input2;
	
	wcin.imbue(locale("kor"));			//한글입력을 위함. 유니코드를 사용하더라도 locale을 설정 안해주면 아무것도 안나오는 경우가 있다!
	cout << "이름을 입력해주세요 : ";	
	wcin >> input2;						//wcin을 이용하고 있음(유니코드를 통해 한글입력을 받기 위함.)
	input = input2.c_str();				//.c_str()을 사용하고 있다고 보여주기위함.

	/*
		LPCWSTR은 wchar_t * 자료형과 서로 호환이 가능하다.
		c#에서 string은 _bstr_t 자료형을 사용하고 있는데 이 또한 위와 마찬가지로 서로 호환이 가능하다.
		_bstr_t 자료형을 처음본다면 한글파일을 보자! << 사용시 주의 사항 있으니 주의하자!! >>
	*/
	
	cout << ptr->text(input);
	system("pause");
	
	
}