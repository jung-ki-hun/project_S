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
	// IJoyStick 의 멤버 함수를 구현합니다.
	void IJoyStick.Move() 
	{
		Console.WriteLine("Joystick Move");
	}

	void IJoyStick.KeyDown()
	{
		Console.WriteLine("Joystick KeyDown");
	}


	// IKeyboard 의 멤버 함수를 구현합니다.	
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
		// Interface 를 상속받은 클래스를 만듭니다.
		GameMachine gm = new GameMachine();

		// 어떤 것을 선택할 것인지를 묻습니다.
		Console.WriteLine("Which do you want to use?");
		Console.Write(" Joystick (Yes) / Keyboard (No) ? : ");
		int nInput = Console.Read();
		
		if (nInput == 'y'|| nInput == 'Y')
		{	
			// GameMachine 으로부터 IJoyStick 인터페이스를 얻습니다.
			IJoyStick js = (IJoyStick) gm;
			js.Move();
			js.KeyDown();
		}
		else
		{
			// GameMachine 으로부터 IKeyboard 인터페이스를 얻습니다.
			IKeyboard kb = (IKeyboard) gm;
			kb.Move();
			kb.KeyDown();
		}
	}
}