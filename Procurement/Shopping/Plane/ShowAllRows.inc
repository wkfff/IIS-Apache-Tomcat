		<table border="1" width="100%">

		<!-- ��ƪ� //-->
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

	              <!-- �p�e�s�� //-->
	              <%
				strName = "txtData01_" + sRdoValue;
				strValue = row_data[row].getString(0);
			  %>
			  <td>
				<input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%>
			  </td>

			  <!-- ������ //-->
			  <%
			    strName = "txtData02_" + sRdoValue;
			    strValue = row_data[row].getString(1);
			  %>
			  <td>
			    <input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%>
			  </td>

			  <!-- �p�e�W�� //-->
			  <%
			    strName = "txtData03_" + sRdoValue;
			    strValue = row_data[row].getString(2);
			  %>
			  <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

			  <!-- �w���� //-->
			  <%
			    strName = "txtData04_" + sRdoValue;
			    strValue = row_data[row].getString(3);
			  %>
			  <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

			  <!-- �ӽг�� //-->
			  <%
			    strName = "txtData05_" + sRdoValue;
			    strValue = row_data[row].getString(4);
			  %>
			  <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

			  <!-- �ӿ�H //-->
			  <%
			    strName = "txtData06_" + sRdoValue;
			    strValue = row_data[row].getString(5);
			  %>
			  <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

			  <!-- �p�e���B //-->
			  <%
			    strName = "txtData07_" + sRdoValue;
			    strValue = row_data[row].getString(6);
			  %>
			  <td><input type="hidden" name="<%=strName%>" value="<%=strValue%>"><%=strValue%></td>

			  <!-- �֩w��� //-->
			  <%
			    strName = "txtData08_" + sRdoValue;
			    strValue = row_data[row].getString(7);

			    if (strValue != null)
			    {
				  String strCheckDate = strValue.replace('-','/');
				  Date myDate = DateFormat.getDateInstance().parse(strCheckDate); 
				  SimpleDateFormat sdf = new SimpleDateFormat("yyyy/MM/dd", Locale.TAIWAN);
				  strValue = sdf.format(myDate);
			    }
			    strValue = (strValue == null) ? "" : strValue;
			    
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
              <td align="center"><input type="submit" name="BtnSend" value="�s�W�p�e��"></td>
              <td align="center"><input type="submit" name="BtnSend" value="�ק�p�e��"></td>
			  <td align="center"><input type="submit" name="BtnSend" value="�R���p�e��"></td>
			  <td align="center"><input type="submit" name="BtnSend" value="�ಾ�p�e��"></td>
              <td align="center"><input type="submit" name="BtnSend" value="��ܥ���"></td>
              </tr>
          </table>    
        </p>  