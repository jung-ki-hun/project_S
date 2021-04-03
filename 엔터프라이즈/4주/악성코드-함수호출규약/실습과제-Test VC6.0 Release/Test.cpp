#include <stdio.h>
int aa(long a, long b, long c)
{
	return a+b+c;
} 
void main()
{
	long a=1, b=2, c=3, s;
	s=aa(a,b,c);
	printf("%d\n", s);
}

 
