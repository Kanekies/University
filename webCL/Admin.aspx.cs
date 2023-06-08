using System;
using System.Collections.Generic;
using System.Linq;
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
    public int UserID;
    SqlConnection con = null;
    private string connectionString = WebConfigurationManager.ConnectionStrings["medicalConnectionString"].ConnectionString;
    protected void Page_Load(object sender, EventArgs e)
    {

    }

    public int CheckPass(string u_name, string u_pass)
    {
        int result = 0;
        con = new SqlConnection(connectionString);
        con.Open();

        // Оператор SQL
        string sql = string.Format("Select u_id FROM users WHERE (u_name =  @u_name) AND (u_password = @u_pass)");

        using (SqlCommand cmd = new SqlCommand(sql, this.con))
        {
            // Добавить параметры
            cmd.Parameters.AddWithValue("@u_name", u_name);
            cmd.Parameters.AddWithValue("@u_pass", u_pass);


            SqlDataReader reader = cmd.ExecuteReader();
            if (reader.Read())
            {
                UserID = Convert.ToInt32(reader["u_id"]);
            }

            if (UserID == 0)
            {
                result = -1;
            }
            else
            {
                result = 1;
            }
        }

        con.Close();

        return result;
    }
    protected void btnAppointment_Click(object sender, EventArgs e)
    {
        try
        {
            if (CheckPass(txtName.Text, txtPass.Text) == 1)
            {

                Response.Redirect("AdminPage.aspx");
                
            }
            else
            {
                Label1.Visible = true;
                Label1.Text = "Ошибка ввода пароля и логина";
            }
        }
        catch (Exception ex)
        {
            Label1.Visible = true;
            Label1.Text = ex.Message;
        }
    }
}