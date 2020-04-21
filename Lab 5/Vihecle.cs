using System;

namespace Vihecle
{

    class Program
    {
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

        public static Car SetSportsman()
        {
            Console.Write("Enter name: ");
            string name = Console.ReadLine();
            Console.Write("Enter the country: ");
            string country = Console.ReadLine();
            Console.Write("Enter the year  of issue: ");
            int age = CheckAge();
            Console.Write("Enter the number of car: ");
            string number = Console.ReadLine();
            Console.Write("Enter the sport rank(1 - Supercar, 2 - Sportcar, 3 - Drift car, 4 - Electric car, 5 - Targa, 6 - Roadster, 7 - Cabriolet, 8 - Coupe, 9 - Buggy, 10 - Bolide): ");
            int rank = CheckRank();
            Console.Write("Enter the name of competitions: ");
            string compname = Console.ReadLine();
            Console.Write("Enter the date of copmetitions: ");
            DateTime date = CheckDate();
            return new Car(name, country, age, number, (Rank)rank, compname, date);
        }

        public static void SetList(Car[] list)
        {
            for (int i = 0; i < list.Length; i++)
                list[i] = SetSportsman();
            Console.Clear();
            Console.WriteLine("List of Car:");
            for (int i = 0; i < list.Length; i++)
                Console.WriteLine(list[i]);
        }

        static void Main(string[] args)
        {
            Car obja = new Car();
            Car objb = new Car("Ferrary", "Sweden", 2018, "Drift racing", Rank.Bolide, "Europe Championship", new DateTime(2020, 08, 01));
            var objc = SetSportsman();
            Console.Clear();
            Console.WriteLine(obja);
            Console.WriteLine(objb);
            Console.WriteLine(objc);

            Car[] list = new Car[4];
            SetList(list);
        }
    }
}
