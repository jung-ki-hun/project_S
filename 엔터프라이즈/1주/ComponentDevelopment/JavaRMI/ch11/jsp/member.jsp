<%@ page language="java" errorPage="error.jsp" %>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">

<html>
<head>
  <title>ȸ������</title>
</head>

<body>
  <form action="/servlet/Member" method = "post">
    <table align="center" bgcolor="#C0C0C0">
      <tr align="center" >
        <td>�̸�</td><td><input type ="text" name="name"></td>
      </tr>
      <tr align="center" >	
        <td>�ֹε�Ϲ�ȣ</td><td><input type="text" name="ssn"></td>
      </tr>		
      <tr align="center" >		
        <td>�ּ�</td><td><input type="text" name="address"></td>
      </tr>		
      <tr align="center" >		
        <td>�Աݾ�</td><td><input type="text" name="balance"></td>
      </tr>		
      <tr align="center" >		
        <td></td><td><input type="submit" value="����"><input type="reset" value="���"></td>
      </tr>		
    </table>
  </form>
</body>

</html>
