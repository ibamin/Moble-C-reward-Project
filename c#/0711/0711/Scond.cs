using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;

namespace _0711
{
    class WaterHeater
    {
        protected int tmp;
        public void settmp(int tmp)
        {
            if (tmp < 10 || tmp > 42)
            {
                Console.WriteLine("10~42도 사이의 온도값을 입력하세요.");
                Console.WriteLine("물의 온도는 15도로 리셋됩니다.");
                this.tmp = 15;
                return;
            }
            this.tmp = tmp;
        }
        public void turnOnWater()
        {
            Console.WriteLine($"Turn on water : {tmp}");
        }
    }
    internal class Scond
    {
        static void Main(string[] args)
        {
            WaterHeater a = new WaterHeater();
            while (true)
            {
                Console.Write("온도를 입력해주세요(종료는 0) :");
                int x = int.Parse(Console.ReadLine());
                if (x == 0) break;
                a.settmp(x);
                a.turnOnWater();
            }
        }
    }
}
