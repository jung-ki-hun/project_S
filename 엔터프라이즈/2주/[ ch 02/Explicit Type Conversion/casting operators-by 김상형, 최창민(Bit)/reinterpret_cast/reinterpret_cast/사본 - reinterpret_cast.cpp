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
	int x;
};	
class BBB 
{ 
public: 
	int y;
};

// ���� ���
class CCC : public AAA, public BBB
{	
public:		
	int z;		
};

void main()
{
	CCC c;	// &c == 100�̶��
	c.x = 1;	c.y = 2; 	c.z = 3;
	AAA *p1 = (AAA*)&c; //  p1 == 100�̰�
	
	BBB *p2 = (BBB*)&c;	//  p2 == 104
	BBB *p3 = static_cast<BBB*>(&c); // p3 == 104��.
	
	BBB *p4 = reinterpret_cast<BBB*>(&c); // p3 == 100
	
	cout << p1 << " : " << p2 << " : " << p3 << " : " << p4 << endl << endl;	
	
	
	//p2->y = 20;		
	p3->y = 20;		
	//p4->y = 20;
	cout << c.x << " : " << c.y << " : " << c.z << endl;
}
//*/