#include <stdio.h>
#include <iostream>
using namespace std;

class A {
public : int i;
public:
    A() {
        i=0;
    }
    void Print() { cout << i << endl; }
};//class A

class B : public A {
    
public:int i;
    B() {
        i=1;
    }
    void Print() { cout << i << endl; }
};//class B

class C : public B {
    int i;
public:
    C() {
        i=2;
    }
    void Print() { cout << i << endl; }
};//class C

void main() {
    A* ap;
	B b; B* bp;
    C c;
    ap=&b;//�� ������ �����Ѱ�?
    ap->Print();//�����ϴٸ�, ������ ȣ��Ǵ°�?
	cout << ap->i << endl;
	bp = (B*)ap;
	cout << bp->i << endl;

	//cout << ((B*)ap)->i << endl;

    //ap=&c;
    //ap->Print();
}//main