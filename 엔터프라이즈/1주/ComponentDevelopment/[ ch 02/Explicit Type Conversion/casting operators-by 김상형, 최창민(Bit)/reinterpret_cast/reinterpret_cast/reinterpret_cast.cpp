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
	int w;
};	

class BBB 
{ 
public: 
	int x;
};

class CCC 
{ 
public: 
	int y;
};
// 다중 상속
class DDD : public AAA, public BBB, public CCC
{	
public:		
	int z;		
};

void main()
{
	DDD d;	
	// &d == 100이라면
	d.w=1;  d.x = 2; d.y = 3; d.z = 4;
	
	AAA *p1 = (AAA*)&d; //  p1 == 100이고
	
	BBB *p2 = (BBB*)&d;	//  p2 == 104
	BBB *p3 = static_cast<BBB*>(&d); // p3 == 104임.
	
	BBB *p4 = reinterpret_cast<BBB*>(&d); // p4 == 100
	
	CCC *p5 = reinterpret_cast<CCC*>(&d); // p5 == 100
	
	cout << p1 << " : " << p2 << " : " << p3 << " : " << p4 << endl << endl;	
	
	//p2->x = 20;		
	p3->x = 11;		
	p4->x = 12;
	//p5->y= 13;
	cout << d.w << " : " << d.x << " : " << d.y << " : " << d.z << endl;
}
//*/