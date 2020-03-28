 using System;
    using System.Globalization;


namespace ConsoleApp4

{
    class Program
    {
        public static void PrintMonths(string language)
        {

            CultureInfo choosenLan = new CultureInfo(language);
            for (int i = 1; i <= 12; i++)
            {
                Console.WriteLine(choosenLan.DateTimeFormat.GetMonthName(i));
            }

        }
        static void Main(string[] args)
        {


            int choice = 0;
           
            Console.WriteLine(@"Choose what language do you want:");
            Console.WriteLine("1.France");
            Console.WriteLine("2.German");
            Console.WriteLine("3.Russian");
            Console.WriteLine("4.Belarus");
            Console.WriteLine("5.Spanish");
            Console.WriteLine("6.English");
            Console.WriteLine("7.Ukrain");
            Console.WriteLine("8.Italy");
            Console.WriteLine("9.Azerbaijani");
            Console.WriteLine("Another number to Exit\n");

            for (; ; )
            {
                do
            {

                try
                {
                    choice = int.Parse(Console.ReadLine());
                    break;
                }
                catch (FormatException)
                {
                    Console.WriteLine("Try again");
                }
            } while (true);
                switch (choice)
                {
                    case 1:
                        PrintMonths("Fr");
                        Console.WriteLine("\n");
                        break;
                    case 2:
                        PrintMonths("De");
                        Console.WriteLine("\n");
                        break;
                    case 3:
                        PrintMonths("Ru");
                        Console.WriteLine("\n");
                        break;
                    case 4:
                        PrintMonths("Be");
                        Console.WriteLine("\n");
                        break;
                    case 5:
                        PrintMonths("Es");
                        Console.WriteLine("\n");
                        break;
                    case 6:
                        PrintMonths("En");
                        Console.WriteLine("\n");
                        break;
                    case 7:
                        PrintMonths("Uk");
                        Console.WriteLine("\n");
                        break;
                    case 8:
                        PrintMonths("It");
                        Console.WriteLine("\n");
                        break;
                    case 9:
                        PrintMonths("Az");
                        Console.WriteLine("\n");
                        break;

                    default:
                        Console.WriteLine("Exit\n");
                        Console.WriteLine("\n");
                        Environment.Exit(0);
                        break;

                       
                }
                
            }
        }
    }
}
