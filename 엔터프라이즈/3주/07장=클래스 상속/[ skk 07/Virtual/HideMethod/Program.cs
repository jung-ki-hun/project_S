using System;

class Base
{
	public void Message() { Console.WriteLine("Base Message"); }
}

class Derived : Base
{
	public void Message() { Console.WriteLine("Derived Message"); }
}

class CSTest
{
	static void Main()
	{
		Base B;
		Derived D = new Derived();
		B = D;
		B.Message();
	}
}
