<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Report2.aspx.cs" Inherits="Default2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
      <td valign="top"><table width="100%" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td><h1>Звіт з оформлення пацієнтів до лікарів</h1></td>
          </tr>
          <tr>
            <td class="c-sep-bg"><img src="images/w17.gif" alt="" width="17" height="1"></td>
          </tr>
          <tr>
            <td class="body_txt">
    <asp:Chart ID="Chart1" runat="server" DataSourceID="SqlDataSource1" Width="565px" Height="335px">
        <Series>
            <asp:Series Name="Series1" ChartType="Doughnut" XValueMember="w_fio" YValueMembers="Total" IsValueShownAsLabel="True" Legend="Legend1"></asp:Series>
        </Series>
        <ChartAreas>
            <asp:ChartArea Name="ChartArea1"></asp:ChartArea>
        </ChartAreas>
        <Legends>
            <asp:Legend Name="Legend1">
            </asp:Legend>
        </Legends>
    </asp:Chart>
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" SelectCommand="SELECT [w_fio], [Total] FROM [View_TotalWork]"></asp:SqlDataSource>
                </td>
              </tr>
          </table>
</asp:Content>

