using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            label1.Text = "Hellow world!";
        }

        private void btn_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("재확인", "corfirm", MessageBoxButtons.OKCancel) == DialogResult.OK)
            {
                label2.Text = "노경록";
            }
            else { label2.Text = "ㅋㅋ"; }

        }

       
    }
}
