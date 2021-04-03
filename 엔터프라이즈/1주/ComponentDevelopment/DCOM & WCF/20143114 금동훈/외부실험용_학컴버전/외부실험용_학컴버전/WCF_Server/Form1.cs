using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.ServiceModel;

namespace WCF_Server
{
    public partial class Form1 : Form
    {
        ServiceHost host;

        public Form1()
        {
            InitializeComponent();
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            // Binding : TCP 사용 Address 
            //string address = "net.tcp://localhost:8080/myAddress";

            // Binding : TCP 사용
            //NetTcpBinding binding = new NetTcpBinding();


            // Binding : Http 사용 Address
             string address = "http://119.195.70.178:8080/myAddress";

             //Binding : Http 사용
            BasicHttpBinding binding = new BasicHttpBinding();


            // Service Host 만들기
            host = new ServiceHost(typeof(MyService));

            // End Point 추가
            host.AddServiceEndpoint(typeof(IMyContract), binding, address);

            // Service Host 시작
            host.Open();
        }

        private void Button2_Click(object sender, EventArgs e)
        {
            host.Close();
        }
    }

    // Client 쪽에서 호출될 함수 Interface
    [ServiceContract]
    public interface IMyContract
    {
        [OperationContract]
        string Hello(string name);
    }

    // 실제로 Client에서 호출될 함수
    public class MyService : IMyContract
    {
        public string Hello(string name)
        {
            return "안녕하세요! " + name + "씨!";
        }
    }
}