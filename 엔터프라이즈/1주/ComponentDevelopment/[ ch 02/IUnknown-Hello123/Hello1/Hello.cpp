// ���ϸ� : Hello.cpp
#include <stdio.h>
#include "hello.h"

char* CHello::sayHello(char* name)
{
	sprintf(buf, "%s �� �ȳ��ϼ���?", name);
	return buf;
}

IHello* CreateInstance()
{
	return (IHello*)new CHello;
}
