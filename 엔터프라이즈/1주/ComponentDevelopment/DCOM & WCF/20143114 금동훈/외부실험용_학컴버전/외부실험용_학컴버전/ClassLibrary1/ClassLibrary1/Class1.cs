using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices; // 동적으로 컴파일러 관련 옵션을 업데이트하는 값을 넣기 위한 부분 
using System.Reflection; // 현재 어셈블리 정보를 동적으로 가져오기 위한 부분 
using Microsoft.Win32; // Registry에 정보를 업데이트 하기 위한 부분
using System.ServiceModel;

namespace ClassLibrary1
{
    [ComVisible(true)] // 구성요소 서비스에 만든 COM+ 구성요소를 추가
    [ClassInterface(ClassInterfaceType.None)] // ClassInterfaceType 열거형 ; 클래스에 대해 생성되는 클래스 인터페이스의 형식을 식별합니다.
    [ProgId("HelloDong.TestWCF")]
    [Guid("68956552-D481-426D-ACCC-50F15E5D8BC9")] 
    public class Class1 : Interface1
    {
        public int add(int a, int b)
        {
            return a + b;
        }
        public string text(string name)
        {
            ChannelFactory<IMyContract> factory = new ChannelFactory<IMyContract>();

            // Address
           // string address = "net.tcp://localhost:8080/myAddress";
             string address = "http://119.195.70.178:8080/myAddress";//
            factory.Endpoint.Address = new EndpointAddress(address);

            // Binding : TCP 사용
            //factory.Endpoint.Binding = new NetTcpBinding();
            //factory.Endpoint.Binding = new NetHttpBinding();
            factory.Endpoint.Binding = new BasicHttpBinding();
            // Contract 설정
            factory.Endpoint.Contract.ContractType = typeof(IMyContract);

            // Channel Factory 만들기
            IMyContract channel = factory.CreateChannel();

            // Server 쪽 함수 호출
            string result = channel.Hello(name);

            // Close Channel
            ((ICommunicationObject)channel).Close();

            return result;
        }
    }
}
