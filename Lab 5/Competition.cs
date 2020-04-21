using System;

namespace Vihecle
{
    class Car : Type
    {
        public string Number { get; set; }

        public struct LLL
        {
            public DateTime date;
            public string name;
        }

        public LLL ht;

        public Car() : base()
        {
            Number = "6793 AB-2";
            ht.date = new DateTime(2020, 07, 01);
            ht.name = "Championship";
        }

        public Car(string a = "", string b = "", int c = 0, string d = "", Rank r = default, string cn = "", DateTime date = default) : base(a, b, c, r)
        {
            Number = d;
            ht.name = cn;
            ht.date = date;
        }

        public override string ToString() => base.ToString() + $"Number of car: {Number}\nCompetitions: {ht.name}\t{ht.date.ToString("d")}\n";
    }
}
