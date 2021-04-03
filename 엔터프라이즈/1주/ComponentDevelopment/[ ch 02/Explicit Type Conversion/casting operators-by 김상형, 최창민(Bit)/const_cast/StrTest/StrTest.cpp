#include<stdio.h>
/*  StrTest1.asm, StrTest1-1.asm 
void main()
{
	char str[]="string";
	str[0]='a';
	printf("%s\n",str);
}
//*/

//*  StrTest2.asm
void main()
{
	char *str="string";
	str[0]='a'; // 정의되어 있지 않음
	printf("%s\n",str);
}
//*/