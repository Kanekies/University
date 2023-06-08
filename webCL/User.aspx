<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="User.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
      <asp:Panel ID="Panel1" runat="server">
    <table width="100%" height="80%" border="0" cellspacing="0" cellpadding="0">
        <tr>
            <td class="body_txt">
                Виберіть ПІБ пацієнта
            </td>
            <td class ="body_txt">
                <asp:DropDownList ID="DropDownList1" runat="server" DataSourceID="SqlDataSource1" DataTextField="p_fio" DataValueField="p_id" Width="300px">
                </asp:DropDownList>
                <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" SelectCommand="SELECT [p_id], [p_fio] FROM [patient]"></asp:SqlDataSource>
            </td>

            </tr>
        <tr>
            <td class="body_txt">
                Виберіть ПІБ лікаря
            </td>
            <td class ="body_txt">
                <asp:DropDownList ID="DropDownList2" runat="server" DataSourceID="SqlDataSource2" DataTextField="w_fio" DataValueField="w_id" Width="300px">
                </asp:DropDownList>
                <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" SelectCommand="SELECT [w_id], [w_fio] FROM [worker]"></asp:SqlDataSource>
            </td>

            </tr>
            <tr>
        <td class="body_txt">Введіть напрямок </td>
        <td class="body_txt">
            <asp:TextBox ID="txtHidden" runat="server" ToolTip="введите направление" Width="300px"></asp:TextBox>
        </td>
                </tr>
        <tr>
        <td class="body_txt">
               Введіть діагноз
            </td>
            <td class ="body_txt">

                <asp:textbox runat="server" ID="txtDiagnose" ToolTip="введите диагноз" Width="300px"></asp:textbox>

            </td>

            </tr>
        <tr>
        <td class="body_txt">
            <asp:button runat="server" text="Новий пацієнт" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="btnNewUser" PostBackUrl="~/NewUser.aspx"  /> 
            
            </td>
            <td class ="body_txt">

              <asp:button runat="server" text="Оформитися в лікарню" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="btnAppointment" OnClick="btnAppointment_Click" />   

            </td>
            </tr>
        </table>
          <asp:Label ID="Label1" runat="server" Text="Label" Visible="False"></asp:Label>
          </asp:Panel>
    <asp:Panel ID="Panel2" runat="server" Visible="False">
        <table width="100%" height="100%" border="0" cellspacing="0" cellpadding="0">
        <tr>
            <td class="body_txt">
               Дані успішно додані.
            </td>
            <td class ="body_txt">
                 <asp:button runat="server" text="Повернутися на головну" BackColor="#0033CC" Font-Names="Arial" Font-Size="Small" ForeColor="#FFFFCC" Width="300px" ID="Button1" PostBackUrl="~/Default.aspx" />    
            </td>

            </tr>
            </table>
    </asp:Panel>
</asp:Content>

