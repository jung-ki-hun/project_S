<%@ page language="java" import="javax.ejb.CreateException,javax.naming.NamingException" isErrorPage="true" session="false" contentType="text/html;charset=euc-kr" %>

<html>
<head><title>에러</title></head>
<%
	String msg = request.getParameter("msg");
	out.println("<center>");
	out.println(msg);
	out.println("<br>");
	out.println("<a href = \"member.jsp\">다시 시도</a>	");
	out.println("</center>");	
%>

</html>
