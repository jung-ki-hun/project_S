#include<stdio.h>

//*
void main()
{
	char str[]="string";
	const char *c1=str;
	char *c2;
	// c1 �̶�� ��� ���������͸� ���� ���������ͷ� ��� �ٲٰ� �ʹ�.
	// ������ �ز� �ٲٱ� ���ؼ�.
	// ������ str�� const�� �ƴϴ�.
	//c1[0]=97;
	//c2=c1;
	c2=const_cast<char *>(c1);
	c2[0]='a';
	printf("%s\n",c2);
}

//*/

/*
void main()
{
	char *str="string"; 
	
	//������ ������ ���� str�� ����Ű�� ���� ���� �� �� ����. read only
	//���� const �� �� ������ ���� ���� ���� ��� �����ϱ� ����  
	//casting �� ������  ����.

	const char *c1=str;
	char *c2;
	
	c2=const_cast<char *>(c1);
	*(c2+0)='a';  //c2[0]='a';   //����
	printf("%s\n",c2);
}

//*/