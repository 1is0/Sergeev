using System;
namespace Unsafe
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(SystemInfo.Memory());
            Console.WriteLine(SystemInfo.Processor());
            Console.WriteLine(Disc.Info("C:\\"));
            Console.WriteLine(Disc.Info("D:\\"));
        }
    }
}
