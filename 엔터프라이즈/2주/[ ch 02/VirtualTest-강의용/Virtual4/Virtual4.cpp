#include<iostream.h>
 class base
 {
 public :
	int a;
	virtual void store(int i)=0;
	virtual int retrieve()=0;
 };
 class derived1 : public base
 {
 public :
	virtual void store(int i) { a=i*2;}
	virtual int retrieve() { return a;}
 };
 class derived2 : public base
 {
 public :
	virtual void store(int i) { a=i*4;}
	virtual int retrieve() { return a;}
 };
 void main(){
 base *p;
 derived1 d1; derived2 d2;
 char ch;
       cin >> ch;
       if(ch=='1') p=&d1;
       else p=&d2;
       p->store(2);
       cout << p->retrieve();
 }