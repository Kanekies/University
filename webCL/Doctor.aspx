<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Doctor.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <asp:Button ID="Button1" runat="server" Text="Назад" PostBackUrl="~/AdminPage.aspx" />
     <td valign="top"><table width="100%" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td><h1>Довідник лікарів</h1></td>
          </tr>
          <tr>
            <td class="c-sep-bg"><img src="images/w17.gif" alt="" width="17" height="1"></td>
          </tr>
          <tr>
            <td class="body_txt">
    <asp:GridView ID="GridView1" runat="server" AllowPaging="True" AllowSorting="True" AutoGenerateColumns="False" CellPadding="4" DataKeyNames="w_id" DataSourceID="SqlDataSource1" ForeColor="#333333" GridLines="None" Width="700px">
        <AlternatingRowStyle BackColor="White" />
        <Columns>
            <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" ShowSelectButton="True" />
            <asp:BoundField DataField="w_id" HeaderText="id" InsertVisible="False" ReadOnly="True" SortExpression="w_id" />
            <asp:BoundField DataField="w_fio" HeaderText="ФИО" SortExpression="w_fio" />
            <asp:BoundField DataField="w_speciality" HeaderText="специальность" SortExpression="w_speciality" />
            <asp:BoundField DataField="w_phone" HeaderText="Тел." SortExpression="w_phone" />
            <asp:BoundField DataField="w_adress" HeaderText="Адрес" SortExpression="w_adress" />
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
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConflictDetection="CompareAllValues" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" DeleteCommand="DELETE FROM [worker] WHERE [w_id] = @original_w_id AND (([w_fio] = @original_w_fio) OR ([w_fio] IS NULL AND @original_w_fio IS NULL)) AND (([w_speciality] = @original_w_speciality) OR ([w_speciality] IS NULL AND @original_w_speciality IS NULL)) AND (([w_phone] = @original_w_phone) OR ([w_phone] IS NULL AND @original_w_phone IS NULL)) AND (([w_adress] = @original_w_adress) OR ([w_adress] IS NULL AND @original_w_adress IS NULL))" InsertCommand="INSERT INTO [worker] ([w_fio], [w_speciality], [w_phone], [w_adress]) VALUES (@w_fio, @w_speciality, @w_phone, @w_adress)" OldValuesParameterFormatString="original_{0}" SelectCommand="SELECT [w_id], [w_fio], [w_speciality], [w_phone], [w_adress] FROM [worker]" UpdateCommand="UPDATE [worker] SET [w_fio] = @w_fio, [w_speciality] = @w_speciality, [w_phone] = @w_phone, [w_adress] = @w_adress WHERE [w_id] = @original_w_id AND (([w_fio] = @original_w_fio) OR ([w_fio] IS NULL AND @original_w_fio IS NULL)) AND (([w_speciality] = @original_w_speciality) OR ([w_speciality] IS NULL AND @original_w_speciality IS NULL)) AND (([w_phone] = @original_w_phone) OR ([w_phone] IS NULL AND @original_w_phone IS NULL)) AND (([w_adress] = @original_w_adress) OR ([w_adress] IS NULL AND @original_w_adress IS NULL))">
        <DeleteParameters>
            <asp:Parameter Name="original_w_id" Type="Int32" />
            <asp:Parameter Name="original_w_fio" Type="String" />
            <asp:Parameter Name="original_w_speciality" Type="String" />
            <asp:Parameter Name="original_w_phone" Type="String" />
            <asp:Parameter Name="original_w_adress" Type="String" />
        </DeleteParameters>
        <InsertParameters>
            <asp:Parameter Name="w_fio" Type="String" />
            <asp:Parameter Name="w_speciality" Type="String" />
            <asp:Parameter Name="w_phone" Type="String" />
            <asp:Parameter Name="w_adress" Type="String" />
        </InsertParameters>
        <UpdateParameters>
            <asp:Parameter Name="w_fio" Type="String" />
            <asp:Parameter Name="w_speciality" Type="String" />
            <asp:Parameter Name="w_phone" Type="String" />
            <asp:Parameter Name="w_adress" Type="String" />
            <asp:Parameter Name="original_w_id" Type="Int32" />
            <asp:Parameter Name="original_w_fio" Type="String" />
            <asp:Parameter Name="original_w_speciality" Type="String" />
            <asp:Parameter Name="original_w_phone" Type="String" />
            <asp:Parameter Name="original_w_adress" Type="String" />
        </UpdateParameters>
    </asp:SqlDataSource>
                </td>
              </tr>
         </table>
</asp:Content>

