      <%
        if (strRadio != null)
        {
          String strMesg = "";
          String strName = request.getParameter("txtName_" + strRadio);
          String strPswd = request.getParameter("txtPswd_" + strRadio);
          String strUnit = request.getParameter("txtUnit_" + strRadio);
          String strRole = request.getParameter("txtRole_" + strRadio);

          if (isDebug)
          {
            out.print("Radio: " + strRadio + "<br>");
            out.print("Name: " + strName + "<br>");
            out.print("Password: " + strPswd + "<br>");
            out.print("Unit: " + strUnit + "<br>");
            out.print("Role: " + strRole + "<br>");
          }
          %>
          <div align="center">
            <table>
              <tr>
                <td></td>
              </tr>
            </table>
          </div>
          <%  
        }
        else
        {
          out.print("�z�|����ܥ���n�ק諸�b���W��...<br>");
          %>
          <div align="center">
            <a href="../Account/AcntManager.jsp">�^�b���޲z����</a>
          </div>  
          <%
        }
      %>