#include "name.h"

void main()
{
	using namespace X;
	hoho inst;
	i=3;
	cout <<X::func() << "\n";
	inst.f1(3);
	inst.f2(5.5);
	
	using namespace Y; // 허참! 이건 안먹네...
	hoho inst2; //Y::hoho inst2;
	//두개의 namespace가 활성화된 경우에는 같은 이름의
	//변수는 명시적으로 구분해야 한다.
}