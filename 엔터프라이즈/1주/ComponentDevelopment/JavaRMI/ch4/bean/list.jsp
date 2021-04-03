<%@page language="java" import="my.mvc.*" contentType="text/html;charset=euc-kr" %>
<!-- 비지니스 로직을 담고있는 객체를 생성 -->
<jsp:useBean id="bean" class="my.mvc.Database" scope="request" />
	
<%
  // 생성된 객체를 통해 connection 을 초기화 
  bean.setConnection();
  
  // 회원에 대한 정보를 모두 호출한다
  Person persons[] = bean.getAllPersons();

  out.println("<html>");
  out.println("<head><title>MVC</title></head>");
  out.println("<body>");
  out.println("<table  border=\"1\" align=\"center\">");
  out.println("<tr  bgcolor=\"Silver\">");
  out.println("<th>번호</th><th>ID</th><th>이름</th><th>전화번호</th><th>주소</th>");
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