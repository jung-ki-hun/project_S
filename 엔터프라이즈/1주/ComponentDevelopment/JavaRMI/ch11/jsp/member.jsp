<%@ page language="java" errorPage="error.jsp" %>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">

<html>
<head>
  <title>회원가입</title>
</head>

<body>
  <form action="/servlet/Member" method = "post">
    <table align="center" bgcolor="#C0C0C0">
      <tr align="center" >
        <td>이름</td><td><input type ="text" name="name"></td>
      </tr>
      <tr align="center" >	
        <td>주민등록번호</td><td><input type="text" name="ssn"></td>
      </tr>		
      <tr align="center" >		
        <td>주소</td><td><input type="text" name="address"></td>
      </tr>		
      <tr align="center" >		
        <td>입금액</td><td><input type="text" name="balance"></td>
      </tr>		
      <tr align="center" >		
        <td></td><td><input type="submit" value="전송"><input type="reset" value="취소"></td>
      </tr>		
    </table>
  </form>
</body>

</html>
