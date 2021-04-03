template <class T>
class CStack
{
public:
	CStack(int s) { v=p=new T[sz=s]; }
	~CStack() { delete [] v; }
	void push(T a) { *p++ = a; }
	T pop(void) { return *--p; }
	int size(void) { return p ? sz: 0; }
private:
	T* v;
	T* p;
	int sz;
};

typedef CStack<int> IntStack;

#include <iostream.h>
void main(void)
{
	//CStack<int> si;
	IntStack si(8);
	si.push(10);
	si.push(20);
	cout << si.size() << endl;
	cout << si.pop() << endl;
	cout << si.pop() << endl;

	CStack<double> sd(10);
	sd.push(4.5);
	sd.push(3.7);
	cout << sd.pop() << endl;
	cout << sd.pop() << endl;
}