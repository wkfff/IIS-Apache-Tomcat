      <div align="center">
      <table border="1" width="100%">
      <%
        Field[] fields = clsAcnt.getFields();
        RowData[] row_data = clsAcnt.getRowDatas();

        int cols = fields.length;
        int rows = row_data.length;

        String outstr = "";
        %>
        <!-- ���W�� //-->
        <%
          outstr = "<tr>\n";
          outstr += "\t\t\t\t  <td width=\"34\" align=\"center\">�I��</td>\n";
          outstr += "\t\t\t\t  <td width=\"34\" align=\"center\">�s��</td>\n";
          for (int col=0; col<cols; col++)
          {
            outstr += "\t\t\t\t  <td>" + fields[col].getCaption() + "</td>\n";
          }
          outstr += "\t\t\t  </tr>";
          out.print(outstr);
        %>
        
        <!-- ��ƦC //-->
        <%
          for (int row=0; row<rows; row++)
          {
            String sRdoValue = row_data[row].getString(0);

            outstr = "<tr>\n";
            
            // RadioBox
            outstr += "\t\t\t\t  <td align=\"center\">";
            outstr += "<input type=\"radio\" name=\"rdoOption\" value=\"" + sRdoValue + "\">";
            outstr += "</td>\n";
            
            // �s���]�y�����^
            outstr += "\t\t\t\t  <td align=\"center\">" + (row+1) + "</td>\n";
            
            // �b���W��
            String strName = "txtName_" + row_data[row].getString(0);
            String strValue = row_data[row].getString(0);
            outstr += "<td>\n";
            outstr += "<input type=\"hidden\" name=\""+strName+"\" value=\""+strValue+"\">";
            outstr += strValue;
            outstr += "</td>\n";
            
            
            // �K�X
            strName = "txtPswd_" + row_data[row].getString(0);
            strValue = row_data[row].getString(1);
            outstr += "\t\t\t\t  <td>";
            outstr += "<input type=\"text\" name=\"" + strName + "\" value=\"" + strValue + "\">";
            outstr += "</td>\n";
            
            // �����W��
            strName = "txtUnit_" + row_data[row].getString(0);
            strValue = row_data[row].getString(2);
            outstr += "\t\t\t\t  <td>";
            outstr += "<SELECT name=\"" + strName + "\" size=\"1\">\n";
            
            String strSelect = "";
            strSelect = ((strValue == null) || (strValue.equals("�@�볡��"))) ? "selected" : "";
	        outstr += "<OPTION value=\"�@�볡��\"" + strSelect + ">�@�볡��</OPTION>\n";

            strSelect = ((strValue != null) && (strValue.equals("�w��޲z"))) ? "selected" : "";
	        outstr += "<OPTION value=\"�w��޲z\"" + strSelect + ">�w��޲z</OPTION>\n";
	        
	        strSelect = ((strValue != null) && (strValue.equals("��T�޲z"))) ? "selected" : "";
	        outstr += "<OPTION value=\"��T�޲z\"" + strSelect + ">��T�޲z</OPTION>\n";

            strSelect = ((strValue != null) && (strValue.equals("����޲z"))) ? "selected" : "";
	        outstr += "<OPTION value=\"����޲z\"" + strSelect + ">����޲z</OPTION>\n";
	        outstr += "</SELECT>\n";
	        outstr += "\t\t\t</td>\n";
            
            // �����v��
            strName = "txtRole_" + row_data[row].getString(0);
            strValue = row_data[row].getString(3);
            outstr += "\t\t\t\t  <td>";
            outstr += "<SELECT name=\"" + strName + "\" size=\"1\">\n";
            
	        strSelect = ((strValue == null) || (strValue.equals("�ϥΪ�"))) ? "selected" : "";
	        outstr += "<OPTION value=\"�ϥΪ�\"" + strSelect + ">�ϥΪ�</OPTION>\n";
	        
	        strSelect = ((strValue != null) && (strValue.equals("�޲z��"))) ? "selected" : "";
	        outstr += "<OPTION value=\"�޲z��\"" + strSelect + ">�޲z��</OPTION>\n";
	        outstr += "</SELECT>\n";
            outstr += "</td>\n";

            outstr += "\t\t\t\t</tr>";
            out.print(outstr);
          }
        %>
      </table>