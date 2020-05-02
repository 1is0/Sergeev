using System;

namespace Vihecle
{
    class Car : Type, IComparable, ICloneable, IChampionship
    {
        public string Number { get; set; }

        public struct Champ
        {
            public DateTime date;
            public string name;
        }

        public Champ ht;

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

        public override string ToString() => base.ToString() + $"\nNumber of car: {Number}\nCompetitions: {ht.name}\t{ht.date.ToString("d")}\n";
        int IComparable.CompareTo(object obj)
        {
            if (this.Age > ((Car)obj).Age) return 1;
            if (this.Age < ((Car)obj).Age) return -1;
            else return 0;
        }

        public object Clone() => (Car)this.MemberwiseClone();

        public void Dope()
        {
            Name = Country = ID = Number = ht.name = "Disqualified";
            Age = 0;
            Rank = 0;
            ht.date = default;
        }

        public void Payment()
        {
            Name = Country = ID = Number = ht.name = "None information";
            Age = 0;
            Rank = 0;
            ht.date = default;
        }
    }
}
