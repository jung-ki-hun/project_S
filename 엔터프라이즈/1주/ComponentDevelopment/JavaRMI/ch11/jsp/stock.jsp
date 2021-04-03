<%@ page language="java" contentType="text/html;charset=euc-kr" %>
<%@ page  import="my.stock.*" %>
<%@ page  import="java.util.*" %>
<%@ page  import="javax.ejb.*" %>
<%@ page  import="javax.naming.*" %>
<%@ page  import="javax.rmi.*" %>
<jsp:useBean id="bean" class="my.stock.StockDAO" scope="request" />

<html>
<head>
	<title>���� �ŷ�</title>
</head>
<meta http-equiv="refresh" content="60;url=http://192.168.0.14/stock.jsp">
<body>

<%
	Stock []stock = bean.getAllStock();
	String ssn = request.getParameter("ssn");
	if(ssn != null){
		session.putValue("ssn",ssn);
	} else if(ssn == null){
		ssn = (String)session.getValue("ssn");
	}
	Portfolio port[] = bean.getPortfolio(ssn);
%>

<center><h6>���� �ֽ� �ü�ǥ</h6></center>
<table align="center">
	<tr bgcolor="Silver" align="center">
		<td>��ȣ</td>
		<td>����ȸ��</td>
		<td>�ֽİ���</td>
		<td>��ǥ�̻�</td>
		<td>ȸ���ڻ�</td>
		<td>ȸ���ּ�</td>								
	</tr>
<%
	for(int i = 0 ; i < stock.length ; i++){ %>
		<tr align="center">
			<td bgcolor="Teal"><%= i+1 %></td>
			<td><%= stock[i].getSymbol() %></td>
			<td><%= stock[i].getPrice() %></td>
			<td><%= stock[i].getName() %></td>
			<td><%= stock[i].getJasan() %></td>									
			<td><%= stock[i].getAddress()%></td>
		</tr>		
<%
	}
%>	
</table>
<center><h6>Portfolio</h6></center>
<table align="center">
	<tr bgcolor="Silver" align="center">
		<td>
			����ȸ��
		</td>
		<td>
			������
		</td>
	</tr>
<%
	for(int i = 0 ; i < port.length ; i++){ %>
		<tr>
		<td><%= port[i].getSymbol() %></td>	
		<td><%= port[i].getQuantity() %></td>
		</tr>
<%
	}
%>
</table>
<hr>
<form action="/servlet/BrokerClient" method="post">
	<table align="center">
		<tr>
			<td>����� �ϴ� �ֽ�</td>
			<td>����</td>
			<td>�Ȱ��� �ϴ� �ֽ�</td>
		</tr>
		<tr>
			<td>
				<select name="buy_symbol" >
					<%
					for(int i = 0 ; i < stock.length ; i++){ %>
						<option value=<%=stock[i].getSymbol() %>><%= stock[i].getSymbol() %></option>	
					<%
					}
				%>
				</select>
			</td>
			<td>
				<input type="text" name="quantity">
			</td>


			<td>
				<select name="sell_symbol" >
					<%
						for(int i = 0 ; i < port.length ; i++){ %>
							<option value=<%=port[i].getSymbol() %>><%= port[i].getSymbol() %></option>	
					<%
						}
					%>
				</select>
			</td>
		</tr>		
		<tr align="center">
			<td></td>
			<td>
				<input type="radio" name="flag" value="1">�ȱ�
				<input type="radio" name="flag" value="2">���
				<input type="hidden" name="ssn" value="<%= ssn %>">
				<input type="submit" value="����">
				<input type="reset" value="���">
			</td>
			<td></td>		
		</tr>
	</table>
</form>
</body>
</html>
