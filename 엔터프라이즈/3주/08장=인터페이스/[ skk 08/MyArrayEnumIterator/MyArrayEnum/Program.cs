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
			for (int i = 0; i < ar.Length; i++)
			{
				yield return ar[i];
			} 
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
