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
        string query = "INSERT INTO appointment (p_id, w_id, a_hidden, a_diagnosis) VALUES (@p_id, @w_id, @a_hidden, @a_diagnosis)";
        SqlCommand cmd = new SqlCommand(query, con);
        cmd.CommandType = CommandType.Text;
        cmd.Parameters.AddWithValue("@p_id", DropDownList1.SelectedValue);
        cmd.Parameters.AddWithValue("@w_id", DropDownList2.SelectedValue);
        cmd.Parameters.AddWithValue("@a_hidden", txtHidden.Text);
        cmd.Parameters.AddWithValue("@a_diagnosis", txtDiagnose.Text);
        
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