using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace App3
{
    internal class CarPicture
    {
        private int car_width;
        private int car_height;
        public string car_name;
        public Color color;

        public CarPicture()
        {
            car_height = 140; car_width = 200;
            car_name = "붕붕이";
            color = Color.Gray;
        }
        public int Width
        {
            get { return car_width; }
            set {
                if (value > 0)
                    car_width = value;
            }
        }
        public int Height
        {
            get { return car_height; }
            set { if (value > 10)
                    car_height = value;
            }
        }
        public int area
        {
            get { return car_height * car_width; } 
        }
        public int round
        {
            get { return (car_width + car_height) * 2; }
        }
        public CarPicture(int car_width,int car_height,string car_name,Color color)
        {
            this.car_width = car_width; 
            this.car_height = car_height; 
            this.car_name = car_name; 
            this.color = color;
        }
        public void MakeCar()
        {
            if (ProcessStarted != null)
                ProcessStarted(this, EventArgs.Empty);
            //seader는 this,Args는 Empy,ProcessStarted호출
            Steb1();
            Steb2();
            Steb3();
            if(ProcessEnded!=null)
                ProcessEnded(this, EventArgs.Empty);
            //seader는 this Arge는 Empy,ProcessEnd호출
        }
        public void Steb1()
        {
            Console.WriteLine("Steb1()");
        }
        public void Steb2()
        {
            Console.WriteLine("Steb2()");
        }
        public void Steb3()
        {
            Console.WriteLine("Steb3()");
        }
        //이벤트
        public event EventHandler ProcessStarted;
        public event EventHandler ProcessEnded;
    }
}
