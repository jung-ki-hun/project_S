using System;
using System.Collections;

namespace MyArrayEnumTest
{
	class MyArray : IEnumerable
	{
		public int[] ar;
		public MyArray() { ar = new int[] { 1, 2, 3, 4, 5 }; }
		public IEnumerator GetEnumerator()
		{
			return new MyArrayEnum(ar);
		}
	}

	class MyArrayEnum : IEnumerator
	{
		private int[] T;
		private int index;
		public MyArrayEnum(int[] aT)
		{
			T = aT;
			Reset();
		}
		public bool MoveNext()
		{
			if (index < T.Length-1)
			{
				index++;
				return true;
			}
			else
			{
				return false;
			}
		}
		public object Current
		{
			get
			{
				return T[index];
			}
		}
		public void Reset()
		{
			index = -1;
		}
	}

	class Program
	{
		static void Main(string[] args)
		{
			MyArray MA = new MyArray();
			foreach (int e in MA)
			{
				Console.WriteLine("배열내의 값들: {0}", e);
			}
		}
	}
}
