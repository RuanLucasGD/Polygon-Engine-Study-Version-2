using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Mat3 m = new Mat3(

                new Vec3(-3, 2, 5),
                new Vec3(-9, 5, 6),
                new Vec3(3, 3, 5)
            );

            Mat3 m2 = new Mat3(

                new Vec3(6, 2, 5),
                new Vec3(-9, 2, 6),
                new Vec3(7, 9, -5)
            );

            Mat3 m3 = m * m2;

            Console.WriteLine("{0} {1} {2}", m3.x1, m3.y1, m3.z1);
            Console.WriteLine("{0} {1} {2}", m3.x2, m3.y2, m3.z2);
            Console.WriteLine("{0} {1} {2}", m3.x3, m3.y3, m3.z3);

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
