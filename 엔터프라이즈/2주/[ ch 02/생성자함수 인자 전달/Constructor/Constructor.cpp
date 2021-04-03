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
	// 생성자에게 인수를 넘겨주는 방법

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
