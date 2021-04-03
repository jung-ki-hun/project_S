#include <stdio.h>
#include <string.h>

class CStr {
    char *str;
  public:
    CStr(char *a="") {
        str=new char[strlen(a)+1];
        strcpy(str,a);
        printf("constructor\n");
    }
    CStr (const CStr &b) {//copy constructor
        str=new char[strlen(b.Get())+1];
        strcpy(str,b.Get());//const ��ü�� const ��� �Լ����� ȣ���� �� 
                            //�ִ�.
        printf("copy constructor\n");
    }
    ~CStr() {
        delete[] str;
        printf("destructor\n");
    }
    char *Get() const {//�Լ� ���� const�� �� �Լ��� ��� ����� ����
                       //���Ѽ��� �ȵ��� �����Ѵ�.�������ڡ��� ��this����
                       //�͡����� �ڼ��� ������ ���̴�.
        return str;
    }
    void Print() { printf("%s\n",str); }
};//class CStr

void f(CStr c) {
    c.Print();
}

void main() {
    CStr s("hello");
    f(s);
}