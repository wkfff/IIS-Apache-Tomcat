        <table border="1" width="100%">

          <!-- Aa|i|C //-->
          <tr>
            <td width="34" align="center">�I��</td>
            <td width="34" align="center">�s��</td>
            <%
              for (int col=0; col<cols; col++) {
                outstr += "<td>" + fields[col].getCaption() + "</td>\n";
              }
              out.print(outstr);
            %>
          </tr>
          
          <!-- ��ܩҦ���ƦC //-->
          <%
            String strName = "";
            String strValue= "", sRdoValue = "", strSelect = "";
            
            for (int row=0; row<rows; row++)
            {
            
              sRdoValue = String.valueOf(row+1);
              %>
              <tr>
                <!-- �I�� //-->
                <td align="center"><input type="radio" name="rdoOption" value="<%=sRdoValue%>"></td>
                
                <!-- �s�� //-->
                <td align="center"><%=(row+1)%></td>

                <!-- �w���� //-->
                <%
                  strName = "txtData01_" + sRdoValue;
                  strValue = row_data[row].getString(0);
                %>
                <td>
                  <input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%>
                </td>

                <!-- �w���� //-->
                <%
                  strName = "txtData02_" + sRdoValue;
                  strValue = row_data[row].getString(1);
                %>
                <td>
                  <input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%>
                </td>

                <!-- �w����B //-->
                <%
                  strName = "txtData03_" + sRdoValue;
                  strValue = row_data[row].getString(2);
                %>
                <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

              </tr>
              <%
            }  
          %>
        </table>
        <p align="center">
          <table border="0" width="100%">
      		  <tr>
              <td align="center"><input type="submit" name="BtnSend" value="���J����t"></td>
              <td align="center"><input type="submit" name="BtnSend" value="�ק����t"></td>
		          <td align="center"><input type="submit" name="BtnSend" value="�R������t"></td>
              <td align="center"><input type="submit" name="BtnSend" value="��ܥ���"></td>
              </tr>
          </table>    
        </p>  