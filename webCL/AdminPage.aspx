<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AdminPage.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <asp:Panel ID="Panel1" runat="server">
        <table width="100%" height="80%" border="0" cellspacing="0" cellpadding="0">
        <tr>
        <td class="body_txt">
            <asp:button runat="server" text="Довідник пацієнтів" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="btnNewUser" PostBackUrl="~/Patient.aspx"  /> 
            
            </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Добвідник лікарів" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="btnAppointment" PostBackUrl="~/Doctor.aspx" />   

            </td>
           
            <td class ="body_txt">

              <asp:button runat="server" text="Довідник користувачів" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="Button4" PostBackUrl="~/AdminUser.aspx" />   

            </td>
            </tr>
            <tr>
                 <td class ="body_txt">

              <asp:button runat="server" text="Оформити пацієнта" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="Button1" PostBackUrl="~/patientWork.aspx" />   

            </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Звіт по пацієнтам" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="Button2" PostBackUrl="~/Report1.aspx" />   

            </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Звіт по лікарям" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="200px" ID="Button3" PostBackUrl="~/Report2.aspx" />   

            </td>
            </tr>
        </table>
    </asp:Panel>
</asp:Content>

