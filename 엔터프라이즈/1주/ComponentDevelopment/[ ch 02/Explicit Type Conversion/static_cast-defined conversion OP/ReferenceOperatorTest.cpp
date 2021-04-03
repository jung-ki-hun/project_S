#include<stdio.h>

class CInter {
public :
	CInter () { m_f=5.8; }
	virtual ~CInter() { }

	operator int() const {
		return(GetVal());
	}

	operator double() const {  // Jeffrey, p.406, line:13 operator HANDLE() Ȯ��.
		return(m_f);
	}

	int& GetVal() { return(m_Val); }
	const int& GetVal() const { return(m_Val); } // only to deal with error 
	
	int SetVal(const int& NewVal)
	{
		int& Val=GetVal();
		Val=NewVal;
		return (Val);
	}
	int operator=(int Val) {
		return (SetVal(Val));   //return�� �ʿ伺�� ���� ����
	}
//private:
	int m_Val;
	double m_f;

};

void main()
{
	CInter bVal;
	bVal=5; //  operator= Ȯ��.
	printf("m_Val = %d\n", bVal.m_Val); //���빰 Ȯ�θ�.
	printf("m_Val = %d\n", (int)bVal); // int cast ������ Ȯ�� - int�� ���� �� ��. bVal�� ����


	int k=static_cast <int> (bVal);
	//operator int()�� �ּ�ó���ϸ�  operator double()�� ����.
	//static_cast<>�� ����ص�.....
	// ǥ�ؿ��� int�� double�� �ո����� ��ȯ���� ���ǵǾ� �ִ� ���


	//Test
	//int k=bVal;     // int cast ������ Ȯ��. �̷��� �ص� ���� operator int()�� ȣ��. LValue int
	//���� operator int()�� �ּ�ó���ϸ�  operator double()�� ����.
	//char k=bVal;  //type conversion error
	
	printf("k = %d\n", k);
	
	double f=bVal;
	//double f=static_cast <float> (bVal);
	//double f=static_cast <double> (bVal);
	
	printf("f = %f\n", f);
}

/*  static_cast <> �� Ÿ�� ��ȯ�� ���ǵǾ� �ִ� ��ü�� ���ؼ��� �۵��Ѵ�;
   -> built-in conversion rules or defined conversion operators
*/
