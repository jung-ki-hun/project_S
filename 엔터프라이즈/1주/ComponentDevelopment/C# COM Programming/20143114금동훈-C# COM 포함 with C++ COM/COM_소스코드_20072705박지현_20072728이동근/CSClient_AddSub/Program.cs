using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using DDAddSub;

namespace CSClient_AddSub
{
    class Program
    {
        static void Main(string[] args)
        {
            AddSub m_AddSub = new AddSub();

            Console.WriteLine("4 + 4 = " + m_AddSub.Add(4, 4));

            Console.WriteLine("16 - 8 = " + m_AddSub.Sub(16, 8));

            System.Console.ReadKey();
        }
    }
}
