#include <stdio.h>
#include <iostream>
using namespace std;

class Object {
public : int i;
public:
    Object() {
        i=0;
    }
    void Print() { cout << i << endl; }
};//class Object

class CheckBox : public Object {
    
public: int i;
	CheckBox () {
        i=1;
    }
    void Print() { cout << i << endl; }
};//class CheckBox



void main() {
    Object* ap;
	CheckBox b; 
    
	ap=&b;//이 문장이 가능한가?
   
	cout << ap->i << endl;  
	//C#에서 property에 의한 field 접근, Method와는 다름
	cout << ((CheckBox *)ap)->i << endl;

}//main