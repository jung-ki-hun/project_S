using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.ServiceModel;
namespace ClassLibrary1
{
    //[ComVisible(true)]
    [Guid("19CECFDA-5F74-4EF7-84CF-4C0D007DE875")]
    public interface Interface1
    {
        int add(int a, int b);
        string text(string name);
    }

    [ServiceContract]
    public interface IMyContract
    {
        [OperationContract]
        string Hello(string name);
    }
}
