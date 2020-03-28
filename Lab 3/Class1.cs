
using System;

namespace ConsoleApp12
{
    class Car
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public double Max_speed { get; set; }
        public double Overclock_to_100 { get; set; }
        public double Еngine_capasity { get; set; }
        public string Type { get; set; }
        public double Engine_power { get; set; }
        public string Transmission { get; set; }
        public string Number { get; set; }

        public Car()
        {
            Name = "Porshe 911R";
            Age = 2017;
            Max_speed = 323;
            Overclock_to_100 = 3.8;
            Еngine_capasity = 4.0;
            Engine_power = 500;
            Transmission = "7-speed manual";
            Type = "Sportcar";

            Number ="6666 AB-6";
        }

        public Car(string n = "", int a = 0, double d = 0, double e = 0, double f = 0, double g = 0, string c = "", string h = "", string i = "")
        {
            Name = n;
            Age = a;
            Max_speed = d;
            Overclock_to_100 = e;
            Еngine_capasity = f;
            Engine_power = g;
            Transmission = c;
            Type = h;
            Number = i;
        }

       

        public override string ToString() => $"Имя: {Name}\nВозраст: {Age}\nМаксимальная скорость: {Max_speed}\nРазгон до 100: {Overclock_to_100}\nМощность двигателя: {Еngine_capasity}\nСтрана: {Engine_power}\nКоробка передач: {Transmission}\nНомер машины: {Number}";
    }
}


