using System;

interface IUnit
{
	void Move();
	void Attack();
	void Die();
}

class Marine : IUnit
{
	public void Move() { Console.WriteLine("아장 아장"); }
	public void Attack() { Console.WriteLine("두두두두"); }
	public void Die() { Console.WriteLine("으아악"); }
}

class Tank : IUnit
{
    public void Move() { Console.WriteLine("끼릭 끼릭"); }
    public void Attack() { Console.WriteLine("빠방~ 쾅"); }
    public void Die() { Console.WriteLine("펑!"); }
}

class Zealot : IUnit
{
    public void Move() { Console.WriteLine("뒤뚱 뒤뚱"); }
    public void Attack() { Console.WriteLine("퍽퍽퍽. 나 질럿이야"); }
    public void Die() { Console.WriteLine("슈우우(파란 연기)"); }
}

class CSTest
{
    static void Main()
    {
        IUnit[] arUnit = { new Marine(), new Tank(), new Zealot() };
        for (int i = 0; i < arUnit.Length; i++)
        {
            arUnit[i].Move();
        }
    }
}
