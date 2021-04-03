#include <iostream.h>
int a=1;
char b=3;

template <class T, int* P, char* Q>
class Foo {
public:
	Foo(T d=0 ) : data(d) {  }
	Foo(int* P) { data=*P;}
	Foo(char* Q) { data=*Q;}

	void Print() { cout << data << endl;}
private:
	T data;
};

int main()
{
	// 생성자에게 인수를 넘겨주는 방법
	
	Foo<int, &a, &b> inst1;
	inst1.Print();

	int c=5;
	Foo<int, &a, &b> inst2=c;
	inst2.Print();

	char d='A';
	Foo<int, &a, &b> inst3=d;
	inst3.Print();

	return 0;
}
