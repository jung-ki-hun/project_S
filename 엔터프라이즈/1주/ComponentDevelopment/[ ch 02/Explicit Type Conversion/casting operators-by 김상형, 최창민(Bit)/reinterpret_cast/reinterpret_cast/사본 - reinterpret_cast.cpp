//──────────────────────────────────
//	[ reinterpret_cast ] 편법적인 일을 수행하는 cating 기법 
//──────────────────────────────────

/*
#include <iostream.h>	
int main()
{
	struct aa { short a;  short b; };
	long value = 0x0008b118;
	
	aa *pb = (aa *)(&value);    // 굳이 reinterpret_cast를 안쓰고 이렇게 해도 된다. 
	//aa *pb = reinterpret_cast<aa*>(&value); 
	             // 컴파일러에게 조르는게 아니다. 프로그램 하다 보니까 필요해서 무식하게 바꾼다. 알고 바꾼다. 배째라.
	
	cout << pb->a << endl;		// 처음 2byte를 출력 
	return 0;
}	
//*/		

//──────────────────────────────────
//	[ ex ] 상속과 casting
//──────────────────────────────────

//*
#include <iostream>	
using namespace std;


class AAA 
{ 
public: 
	int x;
};	
class BBB 
{ 
public: 
	int y;
};

// 다중 상속
class CCC : public AAA, public BBB
{	
public:		
	int z;		
};

void main()
{
	CCC c;	// &c == 100이라면
	c.x = 1;	c.y = 2; 	c.z = 3;
	AAA *p1 = (AAA*)&c; //  p1 == 100이고
	
	BBB *p2 = (BBB*)&c;	//  p2 == 104
	BBB *p3 = static_cast<BBB*>(&c); // p3 == 104임.
	
	BBB *p4 = reinterpret_cast<BBB*>(&c); // p3 == 100
	
	cout << p1 << " : " << p2 << " : " << p3 << " : " << p4 << endl << endl;	
	
	
	//p2->y = 20;		
	p3->y = 20;		
	//p4->y = 20;
	cout << c.x << " : " << c.y << " : " << c.z << endl;
}
//*/