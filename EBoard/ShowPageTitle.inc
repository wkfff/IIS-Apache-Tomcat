<%
  String sPage_no = "";
  sPage_no = request.getParameter("PageNo");
  if (sPage_no == null)
    iPageNo = 1;
  else if (sPage_no != null)
  {   
    if (sPage_no.length() == 0)
      sPage_no = request.getParameter("txtPageNo");

    try {
      iPageNo = Integer.parseInt(sPage_no);
    } 
    catch(Exception e) {
      iPageNo = 1;
    }    
  }  
    
  iPageNo = (iPageNo < 1) ? 1 : iPageNo;
  iPageNo = (iPageNo > iTotalPage) ? iTotalPage : iPageNo;
  
  int nPagesPerShow = 5;                                       // �C����ܦh�֭�
  int start_page = (((iPageNo-1)/nPagesPerShow)*nPagesPerShow)+1;   // �}�l���X
  int end_page = start_page + nPagesPerShow - 1;
  end_page = (end_page > iTotalPage) ? iTotalPage : end_page;        // �������X
%>  
<table width="100%">
  <tr>   
    <%
      String sTotalPage = Integer.toString(iTotalPage);
      int txt_len = sTotalPage.length();
    %>  
    <td align="left">
    <%
      // �p�G���X�j��C���㦸�����ơA�h��� "<<"
      if (start_page >= nPagesPerShow)
      {
        %>
        <a href="<%=strMySelf%>?PageNo=<%=(iPageNo-nPagesPerShow)%>"><<</a>
        <%  
        out.print(" ");
      }

      // �p�G���X�j�� 1�A�h��� "<"
      if (iPageNo > 1)
      {
        %>
        <a href="<%=strMySelf%>?PageNo=<%=(iPageNo-1)%>"><</a>
        <%  
        out.print(" ");      
      }
      
      // �p�G�}�l���X���� 1�A�h��� "1..."
      if (start_page != 1)
      {
        %>
        <a href="<%=strMySelf%>?PageNo=1">1</a>
        <%  
        out.print("... ");
      }
     
      // ��ܲ{�b���ư϶����X
      for (int i=start_page; i<=end_page; i++)
      {
        String msg = "";
        if (i == iPageNo)
          msg = "[" + i + "]";
        else
          msg = "<a href=" + strMySelf + "?PageNo=" + i + ">" + i + "</a>";
        out.print(msg + " ");  
      }
      
      // �p�G�������X���O�̫�@���A�h��� "[�̫�@��]..."
      if (end_page != iTotalPage)
      {
        out.print("...");
        %>
        <a href="<%=strMySelf%>?PageNo=<%=iTotalPage%>"><%=iTotalPage%></a>
        <%  
      }
            // �p�G���X�p��̫�@���A�h��� ">"
      if (iPageNo < iTotalPage)
      {
        %>
        <a href="<%=strMySelf%>?PageNo=<%=(iPageNo+1)%>">></a>
        <%  
        out.print(" ");      
      }
     
      // �p�G���X�p�� (�̤j����-�C����ܪ�����)�A�h��� ">>"
      if (end_page < iTotalPage)
      {
        %>
        <a href="<%=strMySelf%>?PageNo=<%=(iPageNo+nPagesPerShow)%>">>></a>
        <%  
        out.print(" ");
      }
    %>
    </td>
  </tr>  
  <tr>
    <td align="left">
      �@&nbsp<%=iTotalRecs%>&nbsp����ƢA�C��&nbsp<%=iRecsPerPage%>&nbsp���A
      ��&nbsp<input type="text" name="txtPageNo" value="<%=iPageNo%>" size="<%=txt_len%>">�A<%=iTotalPage%>&nbsp��
    </td>
    <td align="right">
      �ֳt����
      <select size="1" name="PageNo">
        <option></option>
        <%
          for (int i=1; i<=iTotalPage; i++)
            out.print("<option>"+i+"</option>");
        %>
      </select>�� <input type="submit" value="�ֳt����">
    </td>    
  </tr>
</table>  
    








































































