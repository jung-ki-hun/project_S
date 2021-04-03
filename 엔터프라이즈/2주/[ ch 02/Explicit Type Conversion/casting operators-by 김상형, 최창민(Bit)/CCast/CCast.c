/*
#include <stdio.h>
void main()
{
	
	char *str="korea";
	int *pi;
	
	pi=(int *)str;
	printf("%d %x\n",*pi,*pi);
}
//*/

//*
#include <stdio.h>
void main()
{
	char *str="korea";
	int *pi;
	char *pc;
	
	pi=(int *)str;
	//pc=(char *)pi;
	pc=(char *)*pi;
	printf("%s\n",pc);
}
//*/


