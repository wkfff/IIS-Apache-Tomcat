      <%
        String strName = request.getParameter("rdoOption");
        if (strName != null)
        {
          String strMesg = "";
          String strTxtName = "txtName_" + strName;
          String strUserName = request.getParameter(strTxtName);
          
          int result = clsAcnt.DeleteAccount(strUserName);
          if (result > 0)
            strMesg += (strName + " �w�g�R��...<br>");

          iRows = clsAcnt.QueryForAllRows();
          if (strMesg != null && strMesg.length() > 0)
          {
            out.print("<input type=\"hidden\" name=\"Message\" value=\""+strMesg+"\">");
            %>
            <script Language="JavaScript">
            <!--
              PopupWindow(240, 160, "no", "no", "no", "yes");
              msgWin.document.write(document.frmAcntMgn.Message.value);
            //-->
            </Script>
           <%
          }
        } else {
          out.print("�z�|����ܥ���n�R�����b���W��...<br>");
          %>
          <div align="center">
            <a href="../Account/AcntManager.jsp">�^�b���޲z����</a>
          </div>  
          <%
        }
      %>  