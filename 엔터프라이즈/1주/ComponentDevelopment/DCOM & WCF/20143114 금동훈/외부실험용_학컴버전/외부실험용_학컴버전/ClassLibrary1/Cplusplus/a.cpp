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
	
	wcin.imbue(locale("kor"));			//�ѱ��Է��� ����. �����ڵ带 ����ϴ��� locale�� ���� �����ָ� �ƹ��͵� �ȳ����� ��찡 �ִ�!
	cout << "�̸��� �Է����ּ��� : ";	
	wcin >> input2;						//wcin�� �̿��ϰ� ����(�����ڵ带 ���� �ѱ��Է��� �ޱ� ����.)
	input = input2.c_str();				//.c_str()�� ����ϰ� �ִٰ� �����ֱ�����.

	/*
		LPCWSTR�� wchar_t * �ڷ����� ���� ȣȯ�� �����ϴ�.
		c#���� string�� _bstr_t �ڷ����� ����ϰ� �ִµ� �� ���� ���� ���������� ���� ȣȯ�� �����ϴ�.
		_bstr_t �ڷ����� ó�����ٸ� �ѱ������� ����! << ���� ���� ���� ������ ��������!! >>
	*/
	
	cout << ptr->text(input);
	system("pause");
	
	
}