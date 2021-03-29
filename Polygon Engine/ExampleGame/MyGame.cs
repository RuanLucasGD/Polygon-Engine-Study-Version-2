using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Console.WriteLine(MathP.Pow(10, 2));

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
