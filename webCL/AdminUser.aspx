<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AdminUser.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <asp:Button ID="Button1" runat="server" PostBackUrl="~/AdminPage.aspx" Text="Назад" />
    <td valign="top"><table width="100%" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td><h1>Керування профілями користувачів</h1></td>
          </tr>
          <tr>
            <td class="c-sep-bg"><img src="images/w17.gif" alt="" width="17" height="1"></td>
          </tr>
          <tr>
            <td class="body_txt">
    <asp:GridView ID="GridView1" runat="server" AllowPaging="True" AllowSorting="True" AutoGenerateColumns="False" CellPadding="4" DataKeyNames="u_id" DataSourceID="SqlDataSource1" ForeColor="#333333" GridLines="None" Width="700px">
        <AlternatingRowStyle BackColor="White" />
        <Columns>
            <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" ShowSelectButton="True" />
            <asp:BoundField DataField="u_id" HeaderText="id" InsertVisible="False" ReadOnly="True" SortExpression="u_id" />
            <asp:BoundField DataField="u_name" HeaderText="Логин" SortExpression="u_name" />
            <asp:BoundField DataField="u_password" HeaderText="Пароль" SortExpression="u_password" />
            <asp:BoundField DataField="isadmin" HeaderText="Админ" SortExpression="isadmin" />
        </Columns>
        <EditRowStyle BackColor="#2461BF" />
        <FooterStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="#2461BF" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#EFF3FB" />
        <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#333333" />
        <SortedAscendingCellStyle BackColor="#F5F7FB" />
        <SortedAscendingHeaderStyle BackColor="#6D95E1" />
        <SortedDescendingCellStyle BackColor="#E9EBEF" />
        <SortedDescendingHeaderStyle BackColor="#4870BE" />
    </asp:GridView>
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConflictDetection="CompareAllValues" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" DeleteCommand="DELETE FROM [users] WHERE [u_id] = @original_u_id AND (([u_name] = @original_u_name) OR ([u_name] IS NULL AND @original_u_name IS NULL)) AND (([u_password] = @original_u_password) OR ([u_password] IS NULL AND @original_u_password IS NULL)) AND (([isadmin] = @original_isadmin) OR ([isadmin] IS NULL AND @original_isadmin IS NULL))" InsertCommand="INSERT INTO [users] ([u_name], [u_password], [isadmin]) VALUES (@u_name, @u_password, @isadmin)" OldValuesParameterFormatString="original_{0}" SelectCommand="SELECT [u_id], [u_name], [u_password], [isadmin] FROM [users]" UpdateCommand="UPDATE [users] SET [u_name] = @u_name, [u_password] = @u_password, [isadmin] = @isadmin WHERE [u_id] = @original_u_id AND (([u_name] = @original_u_name) OR ([u_name] IS NULL AND @original_u_name IS NULL)) AND (([u_password] = @original_u_password) OR ([u_password] IS NULL AND @original_u_password IS NULL)) AND (([isadmin] = @original_isadmin) OR ([isadmin] IS NULL AND @original_isadmin IS NULL))">
        <DeleteParameters>
            <asp:Parameter Name="original_u_id" Type="Int32" />
            <asp:Parameter Name="original_u_name" Type="String" />
            <asp:Parameter Name="original_u_password" Type="String" />
            <asp:Parameter Name="original_isadmin" Type="Int32" />
        </DeleteParameters>
        <InsertParameters>
            <asp:Parameter Name="u_name" Type="String" />
            <asp:Parameter Name="u_password" Type="String" />
            <asp:Parameter Name="isadmin" Type="Int32" />
        </InsertParameters>
        <UpdateParameters>
            <asp:Parameter Name="u_name" Type="String" />
            <asp:Parameter Name="u_password" Type="String" />
            <asp:Parameter Name="isadmin" Type="Int32" />
            <asp:Parameter Name="original_u_id" Type="Int32" />
            <asp:Parameter Name="original_u_name" Type="String" />
            <asp:Parameter Name="original_u_password" Type="String" />
            <asp:Parameter Name="original_isadmin" Type="Int32" />
        </UpdateParameters>
    </asp:SqlDataSource>
                </td>
              </tr>
        </table>
</asp:Content>

