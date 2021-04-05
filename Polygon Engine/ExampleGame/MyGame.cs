using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Vec3 a = new Vec3(5, -10, 2);
            Vec3 b = new Vec3(-2, 1, 5);

            Console.WriteLine(b);

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
