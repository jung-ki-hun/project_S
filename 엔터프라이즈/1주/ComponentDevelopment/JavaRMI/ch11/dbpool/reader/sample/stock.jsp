<%@ page import="java.awt.*,java.sql.*" %>
<%@ page contentType="text/html;chatset=euc-kr"%>
<%@ page import="my.stock.DBPoolManager" %>

<html>
<head>
	<title>주식 거래</title>
</head>

<body>

<table>
<%
	DBPoolManager db = DBPoolManager.getInstance("oracle");
	Connection con = db.getConnection();
	Statement stmt = con.createStatement();
	String query = "select * from stock";
	ResultSet rset = stmt.executeQuery(query);
	out.println(rset);
	out.println("<tr bgcolor=\"Silver\"><td>company</td><td>price</td></tr>");
	for(int i = 0 ; rset.next() ; i++){
		out.println("<tr>");
		out.println("<td>");
		out.println(rset.getString(1));
		out.println("</td>");
		out.println("<td>");
		out.println(rset.getDouble(2));
		out.println("</td>");
		out.println("</tr>");		
	}
	db.freeConnection(con);
%>
</table>
</body>
</html>
