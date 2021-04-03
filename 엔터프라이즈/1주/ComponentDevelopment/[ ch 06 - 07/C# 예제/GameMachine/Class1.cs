using System;

interface IJoyStick
{
	void Move();
	void KeyDown();
}

interface IKeyboard
{
	void Move();
	void KeyDown();
}

class GameMachine : IJoyStick, IKeyboard
{
	// IJoyStick �� ��� �Լ��� �����մϴ�.
	void IJoyStick.Move() 
	{
		Console.WriteLine("Joystick Move");
	}

	void IJoyStick.KeyDown()
	{
		Console.WriteLine("Joystick KeyDown");
	}


	// IKeyboard �� ��� �Լ��� �����մϴ�.	
	void IKeyboard.Move()
	{
		Console.WriteLine("IKeyboard Move");
	}

	void IKeyboard.KeyDown()
	{
		Console.WriteLine("IKeyboard KeyDown");
	}
}

class MainClass
{
	public static void Main()
	{
		// Interface �� ��ӹ��� Ŭ������ ����ϴ�.
		GameMachine gm = new GameMachine();

		// � ���� ������ �������� �����ϴ�.
		Console.WriteLine("Which do you want to use?");
		Console.Write(" Joystick (Yes) / Keyboard (No) ? : ");
		int nInput = Console.Read();
		
		if (nInput == 'y'|| nInput == 'Y')
		{	
			// GameMachine ���κ��� IJoyStick �������̽��� ����ϴ�.
			IJoyStick js = (IJoyStick) gm;
			js.Move();
			js.KeyDown();
		}
		else
		{
			// GameMachine ���κ��� IKeyboard �������̽��� ����ϴ�.
			IKeyboard kb = (IKeyboard) gm;
			kb.Move();
			kb.KeyDown();
		}
	}
}