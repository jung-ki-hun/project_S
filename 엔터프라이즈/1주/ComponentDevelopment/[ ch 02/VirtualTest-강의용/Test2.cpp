#include <iostream.h>
#include <stdio.h>

class base {
public:
	virtual void func()
	{
		cout << "base class\n";
	}
};

class derived : public base {
public:
	virtual void func()
	{
		cout << "derived class\n";
	}
};

void main()
{
	base *p;
	base b;
	derived derv;
	
	p=&b;
	b.func();
	p->func();
	
	p=&derv;
	p->func();
	
	//printf("base::func() - %p\n", p->func);
	printf("base::func() - %p\n", &base::func);
	//printf("derived::func() - %p\n", p->func);
	printf("derived::func() - %p\n", &derived::func);

}
