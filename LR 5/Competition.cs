using System;

namespace Vihecle
{
    class Car : Type
    {
        public string Sport { get; set; }

        public struct LLL
        {
            public DateTime date;
            public string name;
        }

        public LLL ht;

        public Car() : base()
        {
            Sport = "Auto racing";
            ht.date = new DateTime(2020, 07, 01);
            ht.name = "Championship";
        }

        public Car(string n = "", string c = "", int a = 0, string s = "", Rank r = default, string cn = "", DateTime date = default) : base(n, c, a, r)
        {
            Sport = s;
            ht.name = cn;
            ht.date = date;
        }

        public override string ToString() => base.ToString() + $"\nSport: {Sport}\nCompetitions: {ht.name}\t{ht.date.ToString("d")}\n";
    }
}
