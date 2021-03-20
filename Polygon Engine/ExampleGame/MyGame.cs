using System;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
