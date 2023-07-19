using System;
using System.Drawing;

namespace App3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CarPicture carPicture = new CarPicture();
            
            
            Console.WriteLine("속성을 지정해 초기화되어 있는 첫번째 생성자에서의 출력");
            Console.WriteLine("{0} :{1}","자동차의 길이",carPicture.Width);
            Console.WriteLine("자동차의 높이 :"+carPicture.Height);
            Console.WriteLine("자동차의 이름 :"+carPicture.car_name);
            Console.WriteLine("자동차의 색깔 :"+carPicture.color);

            Console.WriteLine();
            Console.WriteLine("set을 통한 속성에 값 입력");
            carPicture.Width = 300;
            Console.WriteLine("{0} :{1}", "자동차의 길이2", carPicture.Width);
            carPicture.Height = 250;
            Console.WriteLine("{0} :{1}", "자동차의 높이2", carPicture.Height);
            Console.WriteLine();

            CarPicture carPicture1 = new CarPicture(210,160,"빵빵이",Color.Green);
            Console.WriteLine("{0} :{1}", "자동차의 길이", carPicture1.Width);
            Console.WriteLine("자동차의 높이 :" + carPicture1.Height);
            Console.WriteLine("자동차의 이름 :" + carPicture1.car_name);
            Console.WriteLine("자동차의 색깔 :" + carPicture1.color);
            Console.WriteLine();

            Console.WriteLine("계산하는 속성 추가");
            Console.WriteLine($"자동차1의 면적:{carPicture1.area}");
            Console.WriteLine($"자동차1의 둘레:{carPicture1.round}");
            Console.WriteLine() ;

            carPicture1.MakeCar();

            Console.WriteLine();
            Console.WriteLine("이벤트 호출");
            carPicture1.ProcessStarted += CarPicture1_ProcessStarted;
            carPicture1.ProcessEnded += CarPicture1_ProcessEnded;
            carPicture1.MakeCar();
        }

        private static void CarPicture1_ProcessEnded(object sender, EventArgs e)
        {
            Console.WriteLine("Process Ended");
        }

        private static void CarPicture1_ProcessStarted(object sender, EventArgs e)
        {
            Console.WriteLine("Process Started");
        }
    }
}
