using System;

class StudentManagement
{
	public static bool IsValideStudent(string StudentID)
	{
		// StudentID 가 정확한 것인지를 체크해서
		// 타당한지의 여부를 true, false 로 넘겨줍니다.

		return true;
	}
	
	public static void SetName(string strName)
	{
		// 이름을 업데이트 합니다.
	}

	public static string GetName(string strName)
	{
		// 이름을 넘겨줍니다.

		return "Test";
	}
}

class StudentClass
{
	
	public StudentClass(string strPersonalID)
	{
		_personalID = strPersonalID;
	}

	public string Name
	{
		// 이름 정보를 얻어옵니다.
		get
		{
			if (StudentManagement.IsValideStudent(_personalID))
			{
				return StudentManagement.GetName(_personalID);
			}
			else
				return null;
		}

		// 이름 정보를 입력합니다.
		set
		{
			if (StudentManagement.IsValideStudent(_personalID))
			{
				StudentManagement.SetName(value);
			}
		}
	}

	private string _personalID;
}


class MainClass
{
	public static void Main()
	{
		StudentClass student = new StudentClass("111-1111");

		// 이름 정보를 가져옵니다.
		Console.WriteLine("Name {0} ", student.Name);

		// 새로운 이름을 설정합니다.
		student.Name = "SmileSeo";
	}
}
