// 파일명 : Hello.cpp
#include <stdio.h>
#include "hello.h"

char* CHello::sayHello(char* name)
{
	sprintf(buf, "%s 씨 안녕하세요?", name);
	return buf;
}

IHello* CreateInstance()
{
	return (IHello*)new CHello;
}
