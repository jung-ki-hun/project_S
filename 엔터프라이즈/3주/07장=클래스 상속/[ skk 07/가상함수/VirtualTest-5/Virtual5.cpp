#include<iostream.h>
 class base
 {
 public :
	int a;
	virtual void store(int i)=0;
	virtual void retrieve()=0;
	virtual void dummy1()=0;
	virtual void dummy2()=0;
	virtual void dummy3()=0;
 };
 class derived1 : public base
 {
 public :
	virtual void store(int i) { a=i*2;}
	virtual void retrieve() { cout << a <<"\n";}
	virtual void dummy1() { cout << "d1-dummy1 \n";}
	virtual void dummy2() { cout << "d1-dummy2 \n";}
	virtual void dummy3() { cout << "d1-dummy3 \n";}
 
 };
 class derived2 : public base
 {
 public :
	virtual void store(int i) { a=i*4;}
	virtual void retrieve() { cout << a<<"\n";}
	virtual void dummy1() { cout << "d2-dummy1 \n";}
	virtual void dummy2() { cout << "d2-dummy2 \n";}
	virtual void dummy3() { cout << "d2-dummy3 \n";}
 };
 void main(){
 base *p;
 derived1 d1; derived2 d2;
 char ch;
       cin >> ch;
       if(ch=='1') p=&d1;
       else p=&d2;
       p->store(2);
       p->retrieve();
	   p->dummy1();
	   p->dummy2();
   	   p->dummy3();

 }