<%@ page language="java" import="javax.ejb.CreateException,javax.naming.NamingException" isErrorPage="true" session="false" contentType="text/html;charset=euc-kr" %>

<html>
<head><title>����</title></head>
<%
	String msg = request.getParameter("msg");
	out.println("<center>");
	out.println(msg);
	out.println("<br>");
	out.println("<a href = \"member.jsp\">�ٽ� �õ�</a>	");
	out.println("</center>");	
%>

</html>
