#include <stdio.h>
void main(){
	union {
		double dou;
		int in[3];
	} ss;
	ss.dou=3.5;
	printf("Data double : %f\n", ss.dou);
	ss.in[0]=17; ss.in[1]=18; ss.in[2]=29;
	printf("Data integer : %d, %d, %d\n", 
		    ss.in[0], ss.in[1], ss.in[2]);

}