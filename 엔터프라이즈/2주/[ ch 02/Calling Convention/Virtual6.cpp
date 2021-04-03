#include<iostream.h>
 class base
 {
 public :
	int a;
 };
 class derived1 : public base
 {
 public :
	void store(int i) { a=i*2;}
	void retrieve() { cout << a <<"\n";}
	void dummy1() { cout << "d1-dummy1 \n";}
	void dummy2() { cout << "d1-dummy2 \n";}
	void dummy3() { cout << "d1-dummy3 \n";}
 
 };
 class derived2 : public base
 {
 public :
	void store(int i) { a=i*4;}
	void retrieve() { cout << a<<"\n";}
	void dummy1() { cout << "d2-dummy1 \n";}
	void dummy2() { cout << "d2-dummy2 \n";}
	void dummy3() { cout << "d2-dummy3 \n";}
 };
 void main(){
 base *p;
 derived1 d1; derived2 d2;
 char ch;

 /* Error Version   //
       cin >> ch;
       if(ch=='1')  p=&d1;
       else p=&d2;
       p->store(2);
       p->retrieve();
	   p->dummy1();
	   p->dummy2();
   	   p->dummy3();
*/

		cin >> ch;
		if(ch=='1') 
		{
			d1.store(2);
			d1.retrieve();
			d1.dummy1();
			d1.dummy2();
			d1.dummy3();
		}
		else 
		{
			d2.store(2);
			d2.retrieve();
			d2.dummy1();
			d2.dummy2();
			d2.dummy3();
		}

}