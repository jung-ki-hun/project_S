 #include <stdio.h>
 int aa(int, int, int);
 void main()
 {
	int a=1, b=2, c=3,s;
	s=aa(a,b,c);
	printf("%d\n", s);
 }

 int aa(int a, int b, int c)
 {
	return a+b+c;
 }