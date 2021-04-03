<html>
<%@ page language="java" import="java.util.*"%>
<jsp:useBean id="bean" scope="request" class="AnnuityBean" />
<jsp:setProperty name="bean" property="*" />

<% bean.processRequest(); %>
<form method=POST action=Annuity.jsp>
<BR>

<br>
Annuity ID 
<INPUT type=text name="id" size="8" value="<%= bean.getId() == null ? "" : bean.getId()%>" >
Name  
<INPUT type=text name="name" size="8" value="<%= bean.getName() == null ? "" : bean.getName()%> ">
Balance
<INPUT type=text name="balance"  size="8" value="<%= bean.getBalance()%>" >
<br>

<br>
<h2><b>Command:</b></h2>
      <INPUT type="radio" name="command" value="100">Create 
      <INPUT type="radio" name="command" value="200">Find Name
      <INPUT type="radio" name="command" value="300">Remove
<br> 

<INPUT type="submit" name="submit" value="Submit">
<Input type="reset" name="reset" value="Reset">
</form>

<%
  Collection set = bean.getCollection();
  if(set != null){
  	Iterator i=set.iterator();
	out.println("<h2> Found List </h2>");
 	 while (i.hasNext()) {
    	Annuity annuity = (Annuity)i.next();
    	String id = (String)annuity.getPrimaryKey();
    	double amount = annuity.getBalance();
		out.println(id + " 's  Balance is "+ amount );
		out.println("<br>");
  	}
	set =null;
  }
%>

</html>