<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Patient.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <asp:Button ID="Button1" runat="server" PostBackUrl="~/AdminPage.aspx" Text="Назад" />
    <td valign="top"><table width="100%" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td><h1>Довідник пацієнтов</h1></td>
          </tr>
          <tr>
            <td class="c-sep-bg"><img src="images/w17.gif" alt="" width="17" height="1"></td>
          </tr>
          <tr>
            <td class="body_txt">
    <asp:GridView ID="GridView1" runat="server" AllowPaging="True" AllowSorting="True" AutoGenerateColumns="False" CellPadding="4" DataKeyNames="p_id" DataSourceID="SqlDataSource1" ForeColor="#333333" GridLines="None" Width="700px">
        <AlternatingRowStyle BackColor="White" />
        <Columns>
            <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" ShowSelectButton="True" />
            <asp:BoundField DataField="p_id" HeaderText="id" InsertVisible="False" ReadOnly="True" SortExpression="p_id" />
            <asp:BoundField DataField="p_fio" HeaderText="ФИО" SortExpression="p_fio" />
            <asp:BoundField DataField="p_adress" HeaderText="Адрес" SortExpression="p_adress" />
            <asp:BoundField DataField="p_phone" HeaderText="Тел" SortExpression="p_phone" />
            <asp:BoundField DataField="p_birthday" DataFormatString="{0:d}" HeaderText="Дата рожд." SortExpression="p_birthday" />
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
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConflictDetection="CompareAllValues" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" DeleteCommand="DELETE FROM [patient] WHERE [p_id] = @original_p_id AND (([p_fio] = @original_p_fio) OR ([p_fio] IS NULL AND @original_p_fio IS NULL)) AND (([p_adress] = @original_p_adress) OR ([p_adress] IS NULL AND @original_p_adress IS NULL)) AND (([p_phone] = @original_p_phone) OR ([p_phone] IS NULL AND @original_p_phone IS NULL)) AND (([p_birthday] = @original_p_birthday) OR ([p_birthday] IS NULL AND @original_p_birthday IS NULL))" InsertCommand="INSERT INTO [patient] ([p_fio], [p_adress], [p_phone], [p_birthday]) VALUES (@p_fio, @p_adress, @p_phone, @p_birthday)" OldValuesParameterFormatString="original_{0}" SelectCommand="SELECT [p_id], [p_fio], [p_adress], [p_phone], [p_birthday] FROM [patient]" UpdateCommand="UPDATE [patient] SET [p_fio] = @p_fio, [p_adress] = @p_adress, [p_phone] = @p_phone, [p_birthday] = @p_birthday WHERE [p_id] = @original_p_id AND (([p_fio] = @original_p_fio) OR ([p_fio] IS NULL AND @original_p_fio IS NULL)) AND (([p_adress] = @original_p_adress) OR ([p_adress] IS NULL AND @original_p_adress IS NULL)) AND (([p_phone] = @original_p_phone) OR ([p_phone] IS NULL AND @original_p_phone IS NULL)) AND (([p_birthday] = @original_p_birthday) OR ([p_birthday] IS NULL AND @original_p_birthday IS NULL))">
        <DeleteParameters>
            <asp:Parameter Name="original_p_id" Type="Int32" />
            <asp:Parameter Name="original_p_fio" Type="String" />
            <asp:Parameter Name="original_p_adress" Type="String" />
            <asp:Parameter Name="original_p_phone" Type="String" />
            <asp:Parameter DbType="Date" Name="original_p_birthday" />
        </DeleteParameters>
        <InsertParameters>
            <asp:Parameter Name="p_fio" Type="String" />
            <asp:Parameter Name="p_adress" Type="String" />
            <asp:Parameter Name="p_phone" Type="String" />
            <asp:Parameter DbType="Date" Name="p_birthday" />
        </InsertParameters>
        <UpdateParameters>
            <asp:Parameter Name="p_fio" Type="String" />
            <asp:Parameter Name="p_adress" Type="String" />
            <asp:Parameter Name="p_phone" Type="String" />
            <asp:Parameter DbType="Date" Name="p_birthday" />
            <asp:Parameter Name="original_p_id" Type="Int32" />
            <asp:Parameter Name="original_p_fio" Type="String" />
            <asp:Parameter Name="original_p_adress" Type="String" />
            <asp:Parameter Name="original_p_phone" Type="String" />
            <asp:Parameter DbType="Date" Name="original_p_birthday" />
        </UpdateParameters>
    </asp:SqlDataSource>
                </td>
              </tr>
        </table>
</asp:Content>

