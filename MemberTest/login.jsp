<html>

<head>
<meta http-equiv="Content-Language" content="zh-tw">
<meta http-equiv="Content-Type" content="text/html; charset=big5">
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<title>�|���n�J</title>
</head>

<Script Language="JavaScript">
<!--
  function datacheck()
  {
    // �P�_�b���O�_���ť�
    if (frmLogin.WorkNo.value=="")
    {
      window.alert("�z���������ʺ٪���J");
      //��ܿ��~�T��
      document.frmLogin.element(0).focus();
      return;
    }

    // �P�_�O�_�w�g��J�K�X
    if (frmLogin.Password.value == "")
    {
      window.alert("�z����������J�K�X����J!!");
      document.frmLogin.element(1).focus();
      return;
    }    
      
    frmLogin.submit();
 }
-->
</Script>

<body>

  <form method="post" name="frmLogin" action="login2.jsp">
  
    <p>�ڬO�b���n�J����...</p>
  
    <table border="1" align="center">
      <tr>
        <td align="left"><font face="�з���" color="#FF0000">�u�@�N���G</font>
        </td>
        <td align="left"><input type="text" name="WorkNo" size="20"></td>
      </tr>
      <tr>
        <td align="left"><font face="�з���" color="#FF0000">�K�@�@�X�G</font></td>
        <td align="left"><input type="password" name="Password" size="20"></td>
      </tr>
      <tr>
        <td align="left" width="100%" height="34" colspan="2">
          <p align="center">
          <input type="submit" name="Send" value="�n�@�J" onclick="datacheck()">
          </p>
        </td>
      </tr>
    </table>

  </form>  

</body>

</html>