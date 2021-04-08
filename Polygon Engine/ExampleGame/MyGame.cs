using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Vec2 a = new Vec2(-10);
            a.x = 2;
            a.y = 2;

            Vec2 b = new Vec2(2);

            Console.WriteLine(b.x);
            Console.WriteLine(b.y);
            //Console.WriteLine(c);

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
