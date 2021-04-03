#include<stdio.h>

//*
void main()
{
	char str[]="string";
	const char *c1=str;
	char *c2;
	// c1 이라는 상수 지시포인터를 비상수 지시포인터로 잠시 바꾸고 싶다.
	// 내용을 쬐끔 바꾸기 위해서.
	// 어차피 str은 const가 아니다.
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
	
	//어차피 포인터 변수 str이 가리키는 값을 수정 할 수 없다. read only
	//따라서 const 를 쓸 이유도 없고 위와 같이 잠시 변경하기 위해  
	//casting 할 이유도  없다.

	const char *c1=str;
	char *c2;
	
	c2=const_cast<char *>(c1);
	*(c2+0)='a';  //c2[0]='a';   //동일
	printf("%s\n",c2);
}

//*/