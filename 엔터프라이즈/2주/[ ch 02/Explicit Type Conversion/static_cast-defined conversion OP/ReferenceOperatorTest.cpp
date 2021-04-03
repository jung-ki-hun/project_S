#include<stdio.h>

class CInter {
public :
	CInter () { m_f=5.8; }
	virtual ~CInter() { }

	operator int() const {
		return(GetVal());
	}

	operator double() const {  // Jeffrey, p.406, line:13 operator HANDLE() 확인.
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
		return (SetVal(Val));   //return의 필요성에 대한 이해
	}
//private:
	int m_Val;
	double m_f;

};

void main()
{
	CInter bVal;
	bVal=5; //  operator= 확인.
	printf("m_Val = %d\n", bVal.m_Val); //내용물 확인만.
	printf("m_Val = %d\n", (int)bVal); // int cast 연산자 확인 - int를 지워 볼 것. bVal의 번지


	int k=static_cast <int> (bVal);
	//operator int()를 주석처리하면  operator double()로 간다.
	//static_cast<>를 사용해도.....
	// 표준에서 int와 double은 합리적인 변환으로 정의되어 있는 모양


	//Test
	//int k=bVal;     // int cast 연산자 확인. 이렇게 해도 위의 operator int()를 호출. LValue int
	//위의 operator int()를 주석처리하면  operator double()로 간다.
	//char k=bVal;  //type conversion error
	
	printf("k = %d\n", k);
	
	double f=bVal;
	//double f=static_cast <float> (bVal);
	//double f=static_cast <double> (bVal);
	
	printf("f = %f\n", f);
}

/*  static_cast <> 는 타입 변환이 정의되어 있는 객체에 대해서만 작동한다;
   -> built-in conversion rules or defined conversion operators
*/
