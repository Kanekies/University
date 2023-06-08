<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="NewUser.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <asp:Panel ID="Panel1" runat="server">
         <table width="100%" height="100%" border="0" cellspacing="0" cellpadding="0">
        <tr>
            <td class="body_txt">
                Введіть ПІБ пацієнтам
            </td>
            <td class ="body_txt">
               
                <asp:textbox runat="server" ID="txtFio" ToolTip="введіть ПІБ" Width="300px"></asp:textbox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtFio" ErrorMessage="Обов'язкове поле" ForeColor="Red" SetFocusOnError="True"></asp:RequiredFieldValidator>
            </td>

            </tr>

            <tr>
             <td class="body_txt">Введіть адреса</td>
             <td class="body_txt">
                 <asp:TextBox ID="txtAdres" runat="server" ToolTip="введіть адрес" Width="300px"></asp:TextBox>
             </td>
        </tr>
        <tr>
        <td class="body_txt">
                Введіть телефон</td>
            <td class ="body_txt">

                <asp:textbox runat="server" ID="txtPhone" ToolTip="введіть телефон" Width="300px"></asp:textbox>

            </td>

            </tr>
        <tr>
        <td class="body_txt">
                Введіть дату народження</td>
            <td class ="body_txt">

                <asp:textbox runat="server" ID="txtDate" ToolTip="Введіть дату народження" Width="300px"></asp:textbox>

            </td>

            </tr>
         <tr>
        <td class="body_txt">
            <asp:Label ID="Label1" runat="server" Text="Label" Visible="False"></asp:Label>
             </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Зареєструвати пацієнти" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="btnAppointment" OnClick="btnAppointment_Click" />   

            </td>
            </tr>
        </table>
    </asp:Panel>
    <asp:Panel ID="Panel2" runat="server" Visible="False">
        <table width="100%" height="100%" border="0" cellspacing="0" cellpadding="0">
        <tr>
            <td class="body_txt">
                Дані успішно збережені. 
            </td>
            <td class ="body_txt">
                 <asp:button runat="server" text="Повернутися на головну" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="Button1" PostBackUrl="~/User.aspx" />    
            </td>

            </tr>
            </table>
    </asp:Panel>
</asp:Content>

