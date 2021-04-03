#include <stdio.h>
int aa(int, int);
int main()
{
	int c;
	c=aa(5,6);
	printf("%d \n", c);
}

int aa(int a, int b)
{
	return (a+b);
}