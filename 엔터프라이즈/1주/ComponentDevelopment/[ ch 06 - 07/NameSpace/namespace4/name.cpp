#include "name.h"

void main()
{
	using namespace X;
	hoho inst;
	i=3;
	cout <<X::func() << "\n";
	inst.f1(3);
	inst.f2(5.5);
	
	using namespace Y; // ����! �̰� �ȸԳ�...
	hoho inst2; //Y::hoho inst2;
	//�ΰ��� namespace�� Ȱ��ȭ�� ��쿡�� ���� �̸���
	//������ ��������� �����ؾ� �Ѵ�.
}