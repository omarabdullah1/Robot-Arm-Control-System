using System.IO.Ports;

namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        SerialPort serialPort1 = new SerialPort();
        List<string> recordList = new();

        int serevoPos = 0;
        public Form1()
        {
            InitializeComponent();
            Console.WriteLine(serialPort1.DataBits);
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            comboBox1.Items.Clear();
            String[] Ports = SerialPort.GetPortNames();
            for (int i = 0; i < Ports.Length; i++)
            {
                comboBox1.Items.Add(Ports[i]);
            }
        }


        private void button1_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("ZStep" + "10");
            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("ZStep" + "100");
            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("ZStep" + "1000");
            }

        }
        void SEND_MESSAGE_FUNC(string msg)
        {
            try
            {
                if (!(serialPort1.IsOpen))
                {
                    serialPort1.PortName = comboBox1.Text;
                    serialPort1.BaudRate = 115200;
                    serialPort1.Open();
                }
                serialPort1.Write(msg);
                serialPort1.Close();
                //myPort.Close();
                //error_tb.Text = "";
                // myList.Add(msg);
            }
            catch (Exception exc)
            {
                MessageBox.Show(exc.Message, "Error");
            }
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            MessageBox.Show(trackBar1.Value.ToString());
        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("-ZStep" + "10");
                recordList.Add("-ZStep10");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("-ZStep" + "100");
                recordList.Add("-ZStep100");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("-ZStep" + "1000");
                recordList.Add("-ZStep1000");

            }


        }

        private void button7_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("StepDouble");
                recordList.Add("StepDouble");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("StepDouble");
                recordList.Add("StepDouble");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("StepDouble1000");
                recordList.Add("StepDouble1000");

            }

        }

        private void button8_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("StepDoubleREV");
                recordList.Add("StepDoubleREV");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("StepDoubleREV");
                recordList.Add("StepDoubleREV");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("StepDoubleREV1000");
                recordList.Add("StepDoubleREV1000");

            }

        }

        private void button9_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("E1_Step" + "10");
                recordList.Add("E1_Step10");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("E1_Step" + "100");
                recordList.Add("E1_Step100");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("E1_Step" + "1000");
                recordList.Add("E1_Step1000");

            }

        }

        private void button10_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("-E1_Step" + "10");
                recordList.Add("-E1_Step10");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("-E1_Step" + "100");
                recordList.Add("-E1_Step100");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("-E1_Step" + "1000");
                recordList.Add("-E1_Step1000");

            }

        }

        private void button12_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("E0_Step" + "10");
                recordList.Add("E0_Step10");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("E0_Step" + "100");
                recordList.Add("E0_Step100");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("E0_Step" + "1000");
                recordList.Add("E0_Step1000");

            }

        }

        private void button11_Click(object sender, EventArgs e)
        {

            if (trackBar1.Value == 10)
            {
                SEND_MESSAGE_FUNC("-E0_Step" + "10");
                recordList.Add("-E0_Step10");

            }
            else if (trackBar1.Value == 20)
            {
                SEND_MESSAGE_FUNC("-E0_Step" + "100");
                recordList.Add("-E0_Step100");

            }
            else if (trackBar1.Value == 30)
            {
                SEND_MESSAGE_FUNC("-E0_Step" + "1000");
                recordList.Add("-E0_Step1000");

            }

        }

        private void button13_Click(object sender, EventArgs e)
        {

            if (serevoPos <= 100)
            {
                SEND_MESSAGE_FUNC("SERVO +");
                recordList.Add("SERVO +");

                serevoPos += 15;
            }
            else
            {
                serevoPos = 100;
            }

        }

        private void button14_Click(object sender, EventArgs e)
        {

            if (serevoPos >= 0)
            {
                SEND_MESSAGE_FUNC("SERVO -");
                recordList.Add("SERVO -");

                serevoPos -= 15;
            }
            else
            {
                serevoPos = 0;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            try
            {
                if (!(serialPort1.IsOpen))
                {
                    serialPort1.PortName = comboBox1.Text;
                    serialPort1.BaudRate = 115200;
                    serialPort1.Open();
                }
            }
            catch (Exception exc)
            {
                MessageBox.Show(exc.Message, "Error");
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.Close();
            }
            catch (Exception exc)
            {
                MessageBox.Show(exc.Message, "Error");
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void button15_Click(object sender, EventArgs e)
        {
            TextWriter txt = new StreamWriter("G:\\demo.txt");
            String oneString = string.Join(",", recordList);
            txt.Write(oneString);
            txt.Close();
        }

        private void button16_Click(object sender, EventArgs e)
        {
            Stream st;
            OpenFileDialog d1 = new OpenFileDialog();
            if (d1.ShowDialog() == DialogResult.OK)
            {
                if ((st = d1.OpenFile()) != null)
                {
                    String file = d1.FileName;
                    String str = File.ReadAllText(file);
                    List<string> motion = str.Split(',').ToList();
                    //MessageBox.Show(motion.First().ToString());
                    foreach (string item in motion)
                    {
                        SEND_MESSAGE_FUNC(item);
                        Thread.Sleep(1500);
                    }
                }
            }
        }
    }
}