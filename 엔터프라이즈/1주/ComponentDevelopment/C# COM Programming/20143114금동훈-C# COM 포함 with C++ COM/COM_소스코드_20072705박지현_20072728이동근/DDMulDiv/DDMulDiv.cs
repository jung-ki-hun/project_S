using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;

using DDAddSub;
using ATLProject3Lib;
namespace DDMulDiv
{
    [Guid("88FF0022-FFFF-4CB5-A068-92F93C99A1E4")]
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    [ComVisible(true)]

    public interface IDDMulDiv
    {
        [DispId(1)]
        int Mul(int val1, int val2);
        [DispId(2)]
        int Div(int val1, int val2);
        [DispId(3)]
        int Add(int val1, int val2);
        [DispId(4)]
        int Sub(int val1, int val2);
    }

    [Guid("DA40719A-27B9-467E-A129-73EFCE619156")]
    [ClassInterface(ClassInterfaceType.None)]
    [ComVisible(true)]
    [ProgId("DD.MulDiv.1")]
    public class DDMulDiv : IDDMulDiv
    {
        
        private AddClass m_Addclass = new AddClass();

        private AddSub m_AddSub = new AddSub();
        public int Mul(int val1, int val2)
        {
            int result = 0;
            for (int i = 0; i < val2; i++)
            {
                
                result = Add(result, val1);
            }

            return result;
        }
        public int Div(int val1, int val2)
        {
            int result = 0;
            for (; ; )
            {
                if (val1 < val2)
                {
                    break;
                }
                val1 = Sub(val1, val2);
                result++;
            }
            return result;
        }
        public int Add(int val1, int val2) { 
            int result = 0;
            m_Addclass.Add(val1,val2,out result);
            return result;//m_AddSub.Add(val1, val2);
        }
        public int Sub(int val1, int val2) { return m_AddSub.Sub(val1, val2); }
    }
}
