#include <stdio.h>
#include <float.h>
void bitpat(int);
void main(void)
{
	union {
		int c;
		float a;
	} ss;
	ss.a=1.4f;
		bitpat(ss.c);

}

void bitpat(int x)
{
	int i;
	for(i=31; i>=0; i--)
		printf("%d", (x>>i) & 0x00000001);
	printf("\n");
}