using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;


namespace DDAddSub
{
    [Guid("0835AB03-EAC6-49E5-8358-60180B108178")]
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    [ComVisible(true)]
    public interface IAddSub
    {
        [DispId(1)]int Add(int val1, int val2);
        [DispId(2)]int Sub(int val1, int val2);
    }

    [Guid("03D53EF3-D175-49DB-B303-1F26666093E8")]
    [ClassInterface(ClassInterfaceType.None)]
    [ComVisible(true)]
    [ProgId("DD.AddSub.1")]
    public class AddSub : IAddSub
    {
        public int Add(int val1, int val2) { return val1 + val2; }
        public int Sub(int val1, int val2) { return val1 - val2; }
    }
}
