<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Report1.aspx.cs" Inherits="Default2" %>

<%@ Register Assembly="System.Web.DataVisualization, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35" Namespace="System.Web.UI.DataVisualization.Charting" TagPrefix="asp" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
     <td valign="top"><table width="100%" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td><h1>Звіт по оформленню пацієнтів в поліклініку</h1></td>
          </tr>
          <tr>
            <td class="c-sep-bg"><img src="images/w17.gif" alt="" width="17" height="1"></td>
          </tr>
          <tr>
            <td class="body_txt">
    <asp:Chart ID="Chart1" runat="server" DataSourceID="SqlDataSource1" Width="566px">
        <Series>
            <asp:Series Name="Series1" XValueMember="Тип" YValueMembers="Всего"></asp:Series>
        </Series>
        <ChartAreas>
            <asp:ChartArea Name="ChartArea1">
                <AxisY Title="Кількість">
                </AxisY>
                <AxisX Title="оформленння в поліклініку">
                </AxisX>
            </asp:ChartArea>
        </ChartAreas>
    </asp:Chart>
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:medicalConnectionString %>" SelectCommand="SELECT [Тип], [Всего] FROM [View_Total]"></asp:SqlDataSource>
                </td>
              </tr>
         </table>
</asp:Content>

