//��������������������������������������������������������������������
//	[ reinterpret_cast ] ������� ���� �����ϴ� cating ��� 
//��������������������������������������������������������������������

/*
#include <iostream.h>	
int main()
{
	struct aa { short a;  short b; };
	long value = 0x0008b118;
	
	aa *pb = (aa *)(&value);    // ���� reinterpret_cast�� �Ⱦ��� �̷��� �ص� �ȴ�. 
	//aa *pb = reinterpret_cast<aa*>(&value); 
	             // �����Ϸ����� �����°� �ƴϴ�. ���α׷� �ϴ� ���ϱ� �ʿ��ؼ� �����ϰ� �ٲ۴�. �˰� �ٲ۴�. ��°��.
	
	cout << pb->a << endl;		// ó�� 2byte�� ��� 
	return 0;
}	
//*/		

//��������������������������������������������������������������������
//	[ ex ] ��Ӱ� casting
//��������������������������������������������������������������������

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
// ���� ���
class DDD : public AAA, public BBB, public CCC
{	
public:		
	int z;		
};

void main()
{
	DDD d;	
	// &d == 100�̶��
	d.w=1;  d.x = 2; d.y = 3; d.z = 4;
	
	AAA *p1 = (AAA*)&d; //  p1 == 100�̰�
	
	BBB *p2 = (BBB*)&d;	//  p2 == 104
	BBB *p3 = static_cast<BBB*>(&d); // p3 == 104��.
	
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