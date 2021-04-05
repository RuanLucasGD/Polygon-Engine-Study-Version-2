using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Vec3 a = new Vec3(1);
            Vec3 b = new Vec3(2);
            Vec3 c = a + b;

            Console.WriteLine(MathP.Min(-1, 1));

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
