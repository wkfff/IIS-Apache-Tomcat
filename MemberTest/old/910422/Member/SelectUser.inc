<form action="<%=ActionPage%>" name="SelectUser" method="post">
<%  
  if (send == null)
  {
    Account01 ac = new Account01(ini_file);
    String sqlstr = "SELECT WorkNo FROM Account";
    int user_cnt = ac.ExecuteQuery(sqlstr);
%>
    �п�ܱz�n�d�ߪ��b���G<SELECT name="Query_WorkNo">
    <option selected></option>
    <%
      for (int row=0; row<user_cnt; row++)
      {
        String[] data = ac.getRowData(row);
        out.print("<option>"+data[0]+"</option>");
      }
      ac.CloseConnection();
    %>
    </Select>
    <input type="submit" name="Send" value="�e�X�b��">
<%
  }
%>    
</form>