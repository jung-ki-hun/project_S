<%@page language="java" import="my.mvc.*" contentType="text/html;charset=euc-kr" %>
<!-- �����Ͻ� ������ ����ִ� ��ü�� ���� -->
<jsp:useBean id="bean" class="my.mvc.Database" scope="request" />
	
<%
  // ������ ��ü�� ���� connection �� �ʱ�ȭ 
  bean.setConnection();
  
  // ȸ���� ���� ������ ��� ȣ���Ѵ�
  Person persons[] = bean.getAllPersons();

  out.println("<html>");
  out.println("<head><title>MVC</title></head>");
  out.println("<body>");
  out.println("<table  border=\"1\" align=\"center\">");
  out.println("<tr  bgcolor=\"Silver\">");
  out.println("<th>��ȣ</th><th>ID</th><th>�̸�</th><th>��ȭ��ȣ</th><th>�ּ�</th>");
  out.println("</tr>");
  
    for(int i = 0 ; i < persons.length ; i++){
      int index = i+1;
      out.println("<tr align=\"center\">");
      out.println("<td>" + index + "</td>");
      out.println("<td>" + persons[i].getId() + "</td>");
      out.println("<td>" + persons[i].getName() + "</td>");
      out.println("<td>" + persons[i].getTel() + "</td>");
      out.println("<td>" + persons[i].getAddress() + "</td>");
      out.println("</tr>");

    }

  out.println("</table>");
  out.println("</body>");
%>