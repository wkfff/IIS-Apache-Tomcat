          if (isDebug)
          {
            out.print("Name: " + strName + "<br>");
            out.print("Password: " + strPswd + "<br>");
            out.print("Unit: " + strUnit + "<br>");
            out.print("Role: " + strRole + "<br>");
          }
          
     	  String strSelect = "";
          String outstr = "<div align=\"center\">\n";
          outstr += "<table border=\"1\">\n";

          // ��ܱb����T
          outstr += "<tr>\n";
          outstr += "  <td>�b���G</td>\n";
          outstr += "  <td><input type=\"text\" name=\"txtName\" value=\""+ strName+ "\"></td>\n";
          outstr += "</tr>\n";

          // ��ܱK�X��T
          outstr += "<tr>\n";
          outstr += "  <td>�K�X�G</td>\n";
          outstr += "  <td><input type=\"password\" name=\"txtPswd\" value=\"" + strPswd + "\"></td>\n";
          outstr += "</tr>\n";

          // ��ܱK�X�A�T�{��T
          outstr += "<tr>\n";
          outstr += "  <td>�K�X�A�T�{�G</td>\n";
          outstr += "  <td><input type=\"password\" name=\"txtRePswd\"></td>\n";
          outstr += "</tr>\n";

          // ��ܳ�����T
          outstr += "<tr>\n";
          outstr += "  <td>�����G</td>\n";
          outstr += "<td>\n";
          outstr += "<SELECT name=\"selUnit\" size=\"1\">\n";

          strSelect = ((strUnit == null) || (strUnit.equals("�@�볡��"))) ? "selected" : "";
		  outstr += "<OPTION value=\"�@�볡��\" " + strSelect + ">�@�볡��</OPTION>\n";
		  
          strSelect = ((strUnit != null) && (strUnit.equals("�w��޲z"))) ? "selected" : "";
		  outstr += "<OPTION value=\"�w��޲z\" " + strSelect + ">�w��޲z</OPTION>\n";

          strSelect = ((strUnit != null) && (strUnit.equals("��T�޲z"))) ? "selected" : "";
		  outstr += "<OPTION value=\"��T�޲z\" " + strSelect + ">��T�޲z</OPTION>\n";

          strSelect = ((strUnit != null) && (strUnit.equals("����޲z"))) ? "selected" : "";
		  outstr += "<OPTION value=\"����޲z\" " + strSelect + ">����޲z</OPTION>\n";
  	 	  outstr += "</SELECT>\n";
          outstr += "</td>\n";
          outstr += "</tr>\n";
          
          // ��ܳ�����T
          outstr += "<tr>\n";
          outstr += "  <td>�����v���G</td>\n";
          outstr += "  <td><input type=\"text\" name=\"txtRole\" value=\"" + strRole + "\"></td>\n";
          outstr += "</tr>\n";
          %>
          <p/>
          <input type="button" name="button1" value="�s�W�b��" onClick="DataCheck()">
          <%  
          outstr += "</table>\n";
          outstr += "</div>\n"; 
          out.print(outstr);