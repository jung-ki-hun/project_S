using System;

class StudentManagement
{
	public static bool IsValideStudent(string StudentID)
	{
		// StudentID �� ��Ȯ�� �������� üũ�ؼ�
		// Ÿ�������� ���θ� true, false �� �Ѱ��ݴϴ�.

		return true;
	}
	
	public static void SetName(string strName)
	{
		// �̸��� ������Ʈ �մϴ�.
	}

	public static string GetName(string strName)
	{
		// �̸��� �Ѱ��ݴϴ�.

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
		// �̸� ������ ���ɴϴ�.
		get
		{
			if (StudentManagement.IsValideStudent(_personalID))
			{
				return StudentManagement.GetName(_personalID);
			}
			else
				return null;
		}

		// �̸� ������ �Է��մϴ�.
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

		// �̸� ������ �����ɴϴ�.
		Console.WriteLine("Name {0} ", student.Name);

		// ���ο� �̸��� �����մϴ�.
		student.Name = "SmileSeo";
	}
}
