<!-- �P�_�O�_�w�g�n�J //-->
<%
  String strUser = (String)session.getAttribute("UserName");
  String strRoleName = (String)session.getAttribute("RoleName");

  if (strUser == null || strUser.length() <= 0)
  {
    String strMesg = "�z�|���n�J���t��, �Ф��n�չϥH�D�k�覡�s������...";
    strMesg = java.net.URLEncoder.encode(strMesg);
    response.sendRedirect("/Procurement/NoLogin.jsp?Mesg="+strMesg);
  }  
%>