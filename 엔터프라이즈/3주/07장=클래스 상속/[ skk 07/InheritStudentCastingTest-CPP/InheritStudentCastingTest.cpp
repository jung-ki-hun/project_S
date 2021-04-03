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
		cout<<"�̸�: "<<Name<<endl;
		cout<<"����: "<<Age<<endl;
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
		cout<<"�й�: "<<StNum<<endl;
	}
	void Study()
	{
			cout<<"�й�: " << StNum << ": �ϴ� õ ���� ���� �� ���� Ȳ"<<endl;
	}
};


int main()
{
	Human *Kim = new Student("ȫ�浿", 25, 8906299);
	Kim->Intro();
  
	//Kim->Study();
	Student *tKim=(Student *) Kim;  
	tKim->Study();

	/* C cast �����ڴ� ȣ���� �����ϴ�. �׷��� �̻��ϰ� �����Ѵ�. �й� ��� ���� 
	Student *Lee= (Student*) new Human("���¹�", 28);
	Lee->Study();
    //*/

	/* C++ cast �����ڴ� ȣ���� �Ұ��ؾ� �Ǵµ�... �����Ѵ�.  
	Student *Lee= dynamic_cast<Student*> (new Human("���¹�", 28));
	cout << Lee << endl;  // 0�� ����ϸ鼭 
	Lee->Study();   // ȣ���� �Ѵ�.
    //*/

	//* C++ cast �����ڸ� �̿��ؼ� �̷��� ���� �Ѵ�. 
	Student *Lee= dynamic_cast<Student*> (new Human("���¹�", 28));
	if(Lee)
		Lee->Study();  
	else
		cout << "ȣ��Ұ�" << endl; 
    //*/


	return 0;
}

// �Ʒ��� ��� �߻��ϰ� dynamic_cast�� ����� �������� ������ 

/* If you meet an error message, "warning C4541: 'dynamic_cast' used on polymorphic type
   'class Parent' with /GR-; unpredictable behavior may result,
   Check option, "Enable Run-Time Type Information(RTTI)"
*/

/* To find this option in the development environment, 
   click Settings on the Project menu. Then click the C/C++ tab, 
   and click C++ Language in the Category box. 
   You can find second Check box related with RTTI below the Category box.
*/

