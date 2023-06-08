<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Graphic.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">

    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="SqlDataSource1" CellPadding="4" CssClass="body_txt" ForeColor="#333333" GridLines="None">
        <AlternatingRowStyle BackColor="White" />
    <Columns>
        <asp:BoundField DataField="w_fio" HeaderText="ПІБ лікаря" SortExpression="w_fio" />
        <asp:BoundField DataField="w_speciality" HeaderText="спеціальність" SortExpression="w_speciality" />
        <asp:BoundField DataField="mn" HeaderText="ПОН" SortExpression="mn" />
        <asp:BoundField DataField="tu" HeaderText="ВІВ" SortExpression="tu" />
        <asp:BoundField DataField="wed" HeaderText="СЕР" SortExpression="wed" />
        <asp:BoundField DataField="th" HeaderText="ЧЕТ" SortExpression="th" />
        <asp:BoundField DataField="fr" HeaderText="ПЯТ" SortExpression="fr" />
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
<asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" SelectCommand="SELECT worker.w_fio, worker.w_speciality, timeTable.mn, timeTable.tu, timeTable.wed, timeTable.th, timeTable.fr FROM timeTable INNER JOIN worker ON timeTable.w_id = worker.w_id"></asp:SqlDataSource>

</asp:Content>

