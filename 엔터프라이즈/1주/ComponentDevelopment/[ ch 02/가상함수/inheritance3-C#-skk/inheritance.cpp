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
    
	ap=&b;//�� ������ �����Ѱ�?
   
	cout << ap->i << endl;  
	//C#���� property�� ���� field ����, Method�ʹ� �ٸ�
	cout << ((CheckBox *)ap)->i << endl;

}//main