<!-- #include file="GetDB.inc" -->
<html>

<head>
<meta http-equiv="Content-Type" content="text/html; charset=big5">
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<title>�������R�R���q�l�p��ï---���ଡ�ʷӤ�������</title>
<style>
body { background-color:#CCCCFF;
       font-size:12pt;
       text-align:left;
       color:#800080
     }
</style>
</head>

<body>

<%
  FileName = "EBook.mdb"
  ActName =Request("infoname")
  SQLstr = "SELECT * FROM FieldInfo Where ���ʺt�X�W��='" & ActName & "'"
  Set rsAct = GetAccessDBRecordset(FileName, SQLstr)
  
  If rsAct Is Nothing Then 
    Response.Write "�}�Ҹ�Ʈw����"
  Elseif Not rsAct.EOF Then 
    n_ActName = rsAct.Fields(0).Value    
    n_ActDate = rsAct.Fields(1).Value
    n_ActPosi = rsAct.Fields(2).Value
    n_ActUnit = rsAct.Fields(3).Value
    n_ActTel  = rsAct.Fields(4).Value    
    n_ActTicket = rsAct.Fields(5).Value    
    
    Response.Write "���ʺt�X�W�١G" & n_ActName & "<br>"
    Response.Write "�t�X����ɶ��G" & n_ActDate & "<br>"
    Response.Write "���ʺt�X�a�I�G" & n_ActPosi & "<br><hr>"

    SQLstr = "SELECT * FROM FieldInfoImg Where ���ʺt�X�W��='" & ActName & "'"
    Set rsAct = GetAccessDBRecordset(FileName, SQLstr)

    Do Until rsAct.EOF
      imgPath = "images/FieldImg/" & rsAct.Fields(rsAct.Fields.Count-1).Value
      Response.Write "<img src=" & imgPath & " width=480 height=320><br>"
      Response.Write rsAct("�t�X���e����") & "<br><hr>"
      rsAct.Movenext
    Loop
    
    Response.Write "�D����G" & n_ActUnit & "<br>"
    Response.Write "�p���q�ܡG" & n_ActTel & "<br>"
    Response.Write "�����G" & n_ActTicket & "<br>"
  End if  
%>

  
</body>

</html>