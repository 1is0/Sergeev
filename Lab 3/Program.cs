using System;

namespace ConsoleApp12
{
    class Vihecle
    {
        static void SetArr(Car[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = new Car();
                Console.Write("Название авто: ");
                arr[i].Name = Console.ReadLine();
                Console.Write("Год выпуска: ");
                arr[i].Age = CheckInt();
                Console.Write("Максимальная скорость: ");
                arr[i].Max_speed = CheckDouble();
                Console.Write("Разгон до 100: ");
                arr[i].Overclock_to_100 = CheckDouble();
                Console.Write("Мощность двигателя: ");
                arr[i].Еngine_capasity = CheckDouble();
                Console.Write("Тип авто: ");
                arr[i].Type = Console.ReadLine();
                Console.Write("Мощность: ");
                arr[i].Engine_power = CheckDouble();
                Console.Write("Коробка передач: ");
                arr[i].Transmission = Console.ReadLine();
                Console.Write("Номер машины: ");
                arr[i].Number = Console.ReadLine();

            }

            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine((i + 1) + ". " + arr[i]);
            }
        }
        static double CheckDouble()
        {
            double j;
            while (!double.TryParse(Console.ReadLine(), out j) || j <= 0)
            {
                Console.Write("Некорректные данные, попробуйте еще раз: ");
            }
            return j;
        }

        static int CheckInt()
        {
            int a;
            while (!int.TryParse(Console.ReadLine(), out a) || a <= 0)
            {
                Console.Write("Некорректные данные, попробуйте еще раз: ");
            }
            return a;
        }

        static void Main()
        {
            Car obja = new Car();
            Car objb = new Car("Porshe 911R", 2017, 323, 3.8, 4.0, 500, "7-ми ступенчатая", "6666 AB-6");
            Console.WriteLine(obja + "\n");
            Console.WriteLine(objb + "\n");

            Car[] arr = new Car[2];
            SetArr(arr);
            Console.WriteLine();
        }
    }
}
