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
    ap=&b;//이 문장이 가능한가?
    ap->Print();//가능하다면, 무엇이 호출되는가?
	cout << ap->i << endl;
	bp = (B*)ap;
	cout << bp->i << endl;

	//cout << ((B*)ap)->i << endl;

    //ap=&c;
    //ap->Print();
}//main