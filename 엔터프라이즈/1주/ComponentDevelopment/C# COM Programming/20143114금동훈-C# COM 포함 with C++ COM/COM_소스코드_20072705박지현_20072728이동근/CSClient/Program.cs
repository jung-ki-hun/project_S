using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using DDMulDiv;

namespace CSClient
{
    class Program
    {
        static void Main(string[] args)
        {
            DDMulDiv.DDMulDiv pMulDiv = new DDMulDiv.DDMulDiv();

            Console.WriteLine("4 + 4 = " + pMulDiv.Add(4, 4));

            Console.WriteLine("16 - 8 = " + pMulDiv.Sub(16, 8));

            Console.WriteLine("2 * 4 = " + pMulDiv.Mul(2, 4));

            Console.WriteLine("32 / 4 = " + pMulDiv.Div(32, 4));

            System.Console.ReadKey();
        }
    }
}
