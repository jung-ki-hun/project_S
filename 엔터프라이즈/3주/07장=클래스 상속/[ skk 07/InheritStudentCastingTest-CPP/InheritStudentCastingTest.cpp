#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


class Human
{
protected:
	string Name;
	int Age;
public:
	Human(string aName, int aAge)
	{
		Name = aName;
		Age = aAge;
	}
public:
	virtual void Intro()
	{
		cout<<"이름: "<<Name<<endl;
		cout<<"나이: "<<Age<<endl;
	}
};

class Student : public Human
{
protected:
	int StNum;
public:
	Student(string aName, int aAge, int aStNum)	: Human(aName, aAge)
	{
		StNum = aStNum;
	}
	virtual void Intro()
	{
		Human::Intro();
		cout<<"학번: "<<StNum<<endl;
	}
	void Study()
	{
			cout<<"학번: " << StNum << ": 하늘 천 따지 검을 현 누를 황"<<endl;
	}
};


int main()
{
	Human *Kim = new Student("홍길동", 25, 8906299);
	Kim->Intro();
  
	//Kim->Study();
	Student *tKim=(Student *) Kim;  
	tKim->Study();

	/* C cast 연산자는 호출이 가능하다. 그러나 이상하게 동작한다. 학번 출력 참고 
	Student *Lee= (Student*) new Human("이태백", 28);
	Lee->Study();
    //*/

	/* C++ cast 연산자는 호출이 불가해야 되는데... 동작한다.  
	Student *Lee= dynamic_cast<Student*> (new Human("이태백", 28));
	cout << Lee << endl;  // 0을 출력하면서 
	Lee->Study();   // 호출은 한다.
    //*/

	//* C++ cast 연산자를 이용해서 이렇게 가야 한다. 
	Student *Lee= dynamic_cast<Student*> (new Human("이태백", 28));
	if(Lee)
		Lee->Study();  
	else
		cout << "호출불가" << endl; 
    //*/


	return 0;
}

// 아래의 경고가 발생하고 dynamic_cast가 제대로 동작하지 않으면 

/* If you meet an error message, "warning C4541: 'dynamic_cast' used on polymorphic type
   'class Parent' with /GR-; unpredictable behavior may result,
   Check option, "Enable Run-Time Type Information(RTTI)"
*/

/* To find this option in the development environment, 
   click Settings on the Project menu. Then click the C/C++ tab, 
   and click C++ Language in the Category box. 
   You can find second Check box related with RTTI below the Category box.
*/

