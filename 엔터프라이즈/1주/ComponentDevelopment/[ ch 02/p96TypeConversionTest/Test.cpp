#include <stdio.h>
class CTest {
public :
	CTest(int a=3, double b=5.4) { m_int=a; m_double=b;}
	operator double *(){
		return &m_double;
	}

	operator int *(){
		return &m_int;
	}
	
	int m_int;
	double m_double;
};

void funcdouble(double * data)
{
	printf("%f\n", *data);
}

void main()
{
	CTest t;
	funcdouble(t);
	
	CTest s(2, 8.7);
	funcdouble(s);
}
