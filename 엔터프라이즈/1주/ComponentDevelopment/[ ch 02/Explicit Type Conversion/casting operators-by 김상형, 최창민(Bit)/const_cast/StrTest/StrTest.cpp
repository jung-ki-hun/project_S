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
	str[0]='a'; // ���ǵǾ� ���� ����
	printf("%s\n",str);
}
//*/