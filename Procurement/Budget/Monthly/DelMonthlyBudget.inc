        <%
          if (isDebug) out.print("Radio Value: " + strRadio + "<br>");
          
          if (strRadio != null)
          {
            String strMesg = "", strTxtName = "";

            strTxtName = "txtData01_" + strRadio;
            String strData01 = request.getParameter(strTxtName);
            if (isDebug) out.print("1: " + strTxtName + ", " + strData01 + "<br>");

            strTxtName = "txtData02_" + strRadio;
            String strData02 = request.getParameter(strTxtName);
            if (isDebug) out.print("2: " + strTxtName + ", " + strData02 + "<br>");
          
            strTxtName = "txtData03_" + strRadio;
            String strData03 = request.getParameter(strTxtName);
            long lData03 = (strData03 != null) ? (long)Long.parseLong(strData03) : 0;
            if (isDebug) out.print("3: " + strTxtName + ", " + lData03 + "<br>");
          
            int result = clsMonthlyBudget.DeleteMonthlyBudget(strData01, strData02, lData03);
            if (result > 0) 
            {
              strMesg += ("�w���ءG" + strData01 + "<br>");
              strMesg += ("����t����G" + strData02 + "<br>");
              strMesg += ("����t���B�G" + lData03 + "<br>");
              strMesg += ("����Ƥw�g�R��...<br>");
			}              

            nRowsCount = clsMonthlyBudget.QueryForAllRows();
            if (strMesg != null && strMesg.length() > 0)
            {
              out.print("<input type=\"hidden\" name=\"Message\" value=\""+strMesg+"\">");
              %>
              <script Language="JavaScript">
              <!--
                PopupWindow(240, 160, "no", "no", "no", "yes");
                msgWin.document.write(document.frmBudgetMonthly.Message.value);
              //-->
              </Script>
             <%
            }
          } else {
            %>
            <p>
              <a href="../Budget/BudgetMng.jsp">�^�u������t�v����</a>
            </p>  
            <%
          }
        %>