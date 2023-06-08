using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Configuration;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;

public partial class Default2 : System.Web.UI.Page
{
    private string connectionString = WebConfigurationManager.ConnectionStrings["medicalConnectionString"].ConnectionString;
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void btnAppointment_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(connectionString);
        string query = "INSERT INTO patient (p_fio, p_adress, p_phone, p_birthday) VALUES (@p_fio, @p_adress, @p_phone, @p_birthday)";
        SqlCommand cmd = new SqlCommand(query, con);
        cmd.CommandType = CommandType.Text;
        cmd.Parameters.AddWithValue("@p_fio", txtFio.Text);
        cmd.Parameters.AddWithValue("@p_adress", txtAdres.Text);
        cmd.Parameters.AddWithValue("@p_phone", txtPhone.Text);
        cmd.Parameters.AddWithValue("@p_birthday", Convert.ToDateTime(txtDate.Text));
        try
        {
            con.Open();
            cmd.ExecuteNonQuery();
            Panel1.Visible = false;
            Panel2.Visible = true;
        }
        catch (SqlException ex)
        {
            Label1.Visible = true;
            Label1.Text = "Ошибка добавления " + ex.ToString();
        }
        finally
        {
            con.Close();
        }
    }
}