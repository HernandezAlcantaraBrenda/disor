<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="main.aspx.vb" Inherits="cifrado.main" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        #form1 {
            height: 154px;
        }
    </style>
</head>
<body style="height: 236px; width: 547px; margin-left: 55px;">
    <form id="form1" runat="server">
    <div>
    
        <asp:Label ID="Label1" runat="server" Text="Mensaje"></asp:Label>
            <asp:TextBox ID="texto" runat="server" Height="16px" Width="170px"></asp:TextBox>
    
    </div>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Resultado"></asp:Label>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Recorrido"></asp:Label>
            <asp:TextBox ID="TextBox1" runat="server" Width="74px"></asp:TextBox>
        </p>
        <asp:TextBox ID="TextBox2" runat="server" Height="68px" Width="153px"></asp:TextBox>
        <asp:TextBox ID="TextBox3" runat="server" Height="64px" style="margin-top: 0px" Width="153px"></asp:TextBox>
    </form>
</body>
</html>
