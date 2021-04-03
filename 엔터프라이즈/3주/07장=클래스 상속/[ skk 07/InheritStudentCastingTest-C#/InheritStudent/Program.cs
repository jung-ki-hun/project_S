using System;

class Human
{
	protected string Name;
	protected int Age;
	public Human(string aName, int aAge)
	{
		Name = aName;
		Age = aAge;
	}
	public virtual void Intro()
	{
		Console.WriteLine("이름:" + Name);
		Console.WriteLine("나이:" + Age);
	}
}

class Student : Human
{
	protected int StNum;
	public Student(string aName, int aAge, int aStNum)
		: base(aName, aAge)
	{
		StNum = aStNum;
	}
	public override void Intro()
	{
		base.Intro();
		Console.WriteLine("학번:" + StNum);
	}
	public void Study()
	{
		Console.WriteLine("하늘 천 따지 검을 현 누를 황");
	}
}

class CSTest
{
	static void Main()
	{
		//*
		Human Kim = new Student("김상형", 25, 8906299);
		Kim.Intro();  //Student의 Intro 호출. Kim 이 가리키는것은 실제로는 Student 객체이다
		//Kim.Study(); 호출불가. intellisense에서 아예 안보인다. 
		//Student tKim=(Student) Kim;  //호출하고 싶다면 downcasting해서
		//tKim.Study();
		// */

		/*
		Student Lee=(Student) new Human("인간", 25); //downcasting이다.
		Lee.Study(); // intellisense에서 Student의 method를 보여 준다. C#에서는 아예 오류로 처리한다.
		// */
	}
}
