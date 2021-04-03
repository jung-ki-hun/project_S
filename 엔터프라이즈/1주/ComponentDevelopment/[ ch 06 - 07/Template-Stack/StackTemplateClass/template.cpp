/*
class CStack
{
public:
	CStack(int s) { v=top=new int[sz=s]; }
	~CStack() { delete [] v; }
	void push(int a) { *top++ = a; }
	int pop(void) { return *--top; }
//	int size(void) { return top ? v; }
private:
	int* v;
	int* top;
	int sz;
};
//*/
//*
template <class J>
class CStack
{
public:
	CStack(int s) { v=p=new J[sz=s]; }
	~CStack() { delete [] v; }
	void push(J a) { *p++ = a; }
	J pop(void) { return *--p; }
	int size(void) { return p ? v; }
private:
	J* v;
	J* p;
	int sz;
};
//*/

#include <iostream.h>
void main(void)
{
	CStack<int> si(10);
//	CStack si(10);
	si.push(10);
	si.push(20);
	cout << si.pop() << endl;
	cout << si.pop() << endl;
//	cout << si.size() << endl;
//*
	CStack<double> sd(10);
	sd.push(4.5);
	sd.push(3.7);
	cout << sd.pop() << endl;
	cout << sd.pop() << endl;
	//*/
}