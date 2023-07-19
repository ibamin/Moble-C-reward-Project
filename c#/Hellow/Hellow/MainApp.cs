using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using static System.Console;

namespace Hellow
{
    internal class Program
    {
        static bool boolVar;
        static void Main(String[] args)
        {
            object a = 123;
            object b = 3.1415_9265_3589_7932_3846_2643_3832_79m;
            object c = true;
            object d = "안녕하세요";

            WriteLine(a);
            WriteLine(b);
            WriteLine(c);
            WriteLine(d);
        }
    }
}
