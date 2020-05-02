using System;

namespace Vihecle
{

    class Program
    {
        public static void Waiting()
        {
            Console.Write("Enter the next button: ");
            Console.ReadKey();
            Console.WriteLine("\n");
        }
        public static int CheckAge()
        {
            int a;
            while (!int.TryParse(Console.ReadLine(), out a) || a <= 0)
                Console.Write("Incorrect input, repeat: ");
            return a;
        }

        public static int CheckRank()
        {
            int a;
            while (!int.TryParse(Console.ReadLine(), out a) || a < 1 || a > 10)
                Console.Write("Incorrect input, repeat: ");
            return a;
        }

        public static DateTime CheckDate()
        {
            DateTime date;
            while (!DateTime.TryParse(Console.ReadLine(), out date))
                Console.Write("Incorrect input, repeat: ");
            return date;
        }
        public static int CheckChampionship()
        {
            int champ;
            while (!int.TryParse(Console.ReadLine(), out champ) || champ < 0 || champ > 1)
                Console.Write("Incorrect input, repeat: ");
            return champ;
        }

        public static Car SetCar()
        {
            Car obj = new Car();
            Console.Write("Enter name: ");
            obj.Name = Console.ReadLine();
            Console.Write("Enter the country: ");
            obj.Country = Console.ReadLine();
            Console.Write("Enter the year  of issue: ");
            obj.Age = CheckAge();
            Console.Write("Enter the number of car: ");
            obj.Number = Console.ReadLine();
            Console.Write("Enter the sport rank(1 - Supercar, 2 - Sportcar, 3 - Drift car, 4 - Electric car, 5 - Targa, 6 - Roadster, 7 - Cabriolet, 8 - Coupe, 9 - Buggy, 10 - Bolide): ");
            obj.Rank = (Rank)CheckRank();
            Console.Write("Enter the name of competitions: ");
            obj.ht.name = Console.ReadLine();
            Console.Write("Enter the date of copmetitions: ");
            obj.ht.date = CheckDate();
            Console.Write("Put on a car ? (0 - no, 1 - yes): ");
            int cont = CheckChampionship();
            if (cont == 0)
            {
                obj.Payment();
                return obj;
            }
            Console.Write("Use nitro? (0 - no,  1 - yes): ");
            int dope = CheckChampionship();
            if (dope == 0) return obj;
            else
            {
                obj.Dope();
                return obj;
            }
        }

        public static void SetList(Car[] list)
        {
            for (int i = 0; i < list.Length; i++)
                list[i] = SetCar();
            Console.Clear();
            Console.WriteLine("List of car:");
            for (int i = 0; i < list.Length; i++)
                Console.WriteLine(list[i]);
        }

        static void Main(string[] args)
        {
            Car abc = new Car();
            Console.WriteLine(abc);
            Waiting();
            Car[] list = new Car[2];
            SetList(list);
            Waiting();
            Console.Clear();
            Console.WriteLine("Sorted list:");
            Array.Sort(list);
            foreach (Car s in list)
              Console.WriteLine(s);
            Waiting();
            Console.WriteLine("Copy of the first car in the list:");
            Car obj = (Car)list[0].Clone();
            Console.WriteLine(obj);
        }
    }
}
