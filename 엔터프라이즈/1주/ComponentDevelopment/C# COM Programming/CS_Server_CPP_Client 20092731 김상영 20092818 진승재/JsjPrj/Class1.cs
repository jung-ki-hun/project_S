using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.IO;

namespace JsjPrj
{
  [Guid("694C1820-04B6-4988-928F-FD858B95C880")]
    public interface ICalc
    {
        [DispId(1)]
        int sum(int val1,int val2);
        [DispId(2)]
        int sub(int val1,int val2);
        [DispId(3)]
        int mul(int val1, int val2);
        [DispId(4)]
        double div(int val1, int val2);
    }

    // Events interface Database_COMObjectEvents 
    [Guid("47C976E0-C208-4740-AC42-41212D3C34F0"), 
    InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface DBCOM_Events 
    {
    }


    [Guid("9E5E5FB2-219D-4ee7-AB27-E4DBED8E123E"),
    ClassInterface(ClassInterfaceType.None),
    ComSourceInterfaces(typeof(DBCOM_Events))]
    public class Calc : ICalc
    {

        public Calc()
        {

        }


        public int sum(int val1, int val2)
        {
            return val1 + val2;
        }

        public int sub(int val1, int val2)
        {
            return val1 + val2;
        }

        public int mul(int val1, int val2)
        {

            return val1 + val2;
        }

        public double div(int val1, int val2)
        {
            return val1 / val2;
        }

    }   
}




