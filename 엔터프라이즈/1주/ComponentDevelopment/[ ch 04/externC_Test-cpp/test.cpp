#include <stdio.h>
//extern "C" int aa(int, int);
int aa(int, int);  //name mangling 
int main()
{
	int c;
	c=aa(5,6);
	printf("%d \n", c);
	return 0;
}

int aa(int a, int b)
{
	return (a+b);
}