#include <iostream.h>

class Foo {
public:
	Foo() {  }
	Foo(int a) { data=a;}
	void Print() { cout << data << endl;}
private:
	int data;
};

int main()
{
	// �����ڿ��� �μ��� �Ѱ��ִ� ���

	// shorthand form
	Foo inst1(1);
	inst1.Print();

	int d=3;
	Foo inst2=d;
	inst2.Print();

	Foo inst3=5;
	inst3.Print();
	
	//explicit form
	Foo inst4=int(7); 
	inst4.Print();

	return 0;
}
