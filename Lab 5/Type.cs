namespace Vihecle
{
    enum Rank
    {
        Supercar = 1,
        Sportcar,
        Driftcar,
        Targa,
        Electriccar,
        Roadster,
        Cabriolet,
        Coupe,
        Buggy,
        Bolide
    }

    abstract class Type : Information
    {
        public int Age { get; set; }

        public Rank @Rank { get; set; }

        public Type() : base()
        {
            Age = 2002;
            @Rank = Rank.Bolide;
        }

        public Type(string a, string b, int c, Rank r) : base(a, b)
        {
            Age = c;
            @Rank = r;
        }

        public override string ToString() => base.ToString() + $"\nAge: {Age}\nRank: {@Rank}";
    }
}
