<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Admin.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
     `<asp:Panel ID="Panel1" runat="server">
         <table width="80%" height="100%" border="0" cellspacing="0" cellpadding="0">
        <tr>
            <td class="body_txt">
                Введіть логін
            </td>
            <td class ="body_txt">
               
                <asp:textbox runat="server" ID="txtName" ToolTip="Введіть логин" Width="300px"></asp:textbox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtName" ErrorMessage="Обов'язкове поле" ForeColor="Red" SetFocusOnError="True" EnableClientScript="False"></asp:RequiredFieldValidator>
            </td>

            </tr>

            <tr>
             <td class="body_txt">Введіть пароль</td>
             <td class="body_txt">
                 <asp:TextBox ID="txtPass" runat="server" ToolTip="Введіть пароль" Width="300px" TextMode="Password"></asp:TextBox>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="txtPass" ErrorMessage="Обов'язкове поле" ForeColor="Red" SetFocusOnError="True" EnableClientScript="False"></asp:RequiredFieldValidator>
                  </td>
        </tr>
       
         <tr>
        <td class="body_txt">
            <asp:Label ID="Label1" runat="server" Text="Label" Visible="False"></asp:Label>
             </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Зайти в систему" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="btnAppointment" OnClick="btnAppointment_Click" />   

            </td>
            </tr>
        </table>
    </asp:Panel>
    
</asp:Content>

