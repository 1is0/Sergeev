using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program1
    {

        static void Main(string[] args)
        {
            double storona1, storona2, storona3, perim, square, radvpis, radopis, angle1, angle2, angle3;
            Console.Write("Первый угол = ");
            angle1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Второй угол = ");
            angle2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Третий угол = ");
            angle3 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Первая сторона = ");
            storona1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Вторая сторона = ");
            storona2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Третья сторона = ");
            storona3 = Convert.ToDouble(Console.ReadLine());
            if ((angle1 + angle2 + angle3 == 180))
            {
                if ((storona3 + storona2 > storona1) || (storona2 + storona1 > storona3) || (storona3 + storona1 > storona2))
                {
                   
                    if ((storona1 == storona2 && storona1 == storona3) && (angle1 == angle2 && (angle2 == angle3)))
                    {
                        Console.WriteLine("Это равносторонний треугольник");
                        Console.WriteLine("У него все углы по 60 градусов");
                        perim = storona1 + storona2 + storona3;
                        Console.WriteLine("Периметр = " + perim);
                        square = ((Math.Pow(storona1, 2) * Math.Sqrt(3)) / 4);
                        Console.WriteLine("Площадь равностороннего треугольика = " + square);
                        radvpis = storona1 / 2 * Math.Sqrt(3);
                        Console.WriteLine("Радиус вписанной окружности в равносторонний треугольник = " + radvpis);
                        radopis = storona1 / Math.Sqrt(3);
                        Console.WriteLine("Радиус описанной окружности в равносторонний треугольник = " + radopis);
                    }
                    else if (((storona1 == storona2) || (storona2 == storona3) || (storona3 == storona1)) && ((angle1 == angle2) || (angle2 == angle3) || (angle3 == angle1)))
                    {
                        Console.WriteLine("Это равнобедренный треугольник");
                        Console.WriteLine("У него два угла равны");
                        perim = storona1 + storona2 + storona3;
                        Console.WriteLine("Периметр = " + perim);
                        if (storona1 == storona2)
                        {
                            square = (storona3 * Math.Sqrt(Math.Pow(storona1, 2) - Math.Pow(storona3, 2) / 4) / 2);
                            radvpis = storona3 / 2 * Math.Sqrt((2 * storona2 - storona3) / (2 * storona2 + storona3));
                            radopis = Math.Pow(storona2, 2) / Math.Sqrt(Math.Pow(2 * storona1, 2) - Math.Pow(storona3, 2));
                        }
                        else if (storona2 == storona3)
                        {
                            square = (storona1 * Math.Sqrt(Math.Pow(storona2, 2) - Math.Pow(storona2, 2) / 4) / 2);
                            radvpis = storona1 / 2 * Math.Sqrt((2 * storona2 - storona1) / (2 * storona2 + storona1));
                            radopis = Math.Pow(storona2, 2) / Math.Sqrt(Math.Pow(2 * storona2, 2) - Math.Pow(storona1, 2));
                        }
                        else
                        {
                            square = (storona2 * Math.Sqrt(Math.Pow(storona1, 2) - Math.Pow(storona3, 2) / 4) / 2);
                            radvpis = storona2 / 2 * Math.Sqrt((2 * storona1 - storona2) / (2 * storona1 + storona2));
                            radopis = Math.Pow(storona1, 2) / Math.Sqrt(Math.Pow(2 * storona1, 2) - Math.Pow(storona2, 2));
                        }
                        Console.WriteLine("Площадь = " + square);
                        Console.WriteLine("Радиус вписанной окружности = " + radvpis);
                        Console.WriteLine("Радиус описанной окружности = " + radopis);
                    }
                    else if ((storona1!=storona2 && storona1!=storona3 && storona2!=storona3)&&(angle1!=angle2 && angle2!=angle3 && angle3!=angle1))
                    {
                        Console.WriteLine("Это произвольный треугольник");
                        Console.WriteLine("У него произвольные углы,но они равны 180");
                        perim = storona1 + storona2 + storona3;
                        Console.WriteLine("Периметр = " + perim);
                        square = Math.Sqrt(perim * (perim - storona1) * (perim - storona2) * (perim - storona3) / perim);
                        Console.WriteLine("Площадь = " + square);
                        radvpis = Math.Sqrt((perim - storona1) * (perim - storona2) * (perim - storona3));
                        Console.WriteLine("Радиус вписанной окружности = " + radvpis);
                        radopis = ((storona3 * storona2 * storona1) / 4 * square);
                        Console.WriteLine("Радиус описанной окружности = " + radopis);
                    }
                    else
                    {
                        Console.WriteLine("Такого треугольника не существует ");
                    }
                }
                else
                {
                 Console.WriteLine("Это не треугольник");
                }
            }
            else
            {
                Console.WriteLine("Это не треугольник");
            }            
        }
    }
}
