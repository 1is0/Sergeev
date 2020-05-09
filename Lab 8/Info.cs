using System;

namespace ConsoleApp22
{
    abstract class Information
    {
        public string Name { get; set; }
        public string Country { get; set; }
        protected string ID { get; set; }

        public Information()
        {
            Name = "Porshe";
            Country = "Italy";
            ID = GenID();
        }

        public Information(string a, string b)
        {
            Name = a;
            Country = b;
            ID = GenID();
        }

        public static string GenID() => Guid.NewGuid().ToString();

        public override string ToString() => $"Name: {Name}\nCountry: {Country}\nID: {ID}";
    }
}
