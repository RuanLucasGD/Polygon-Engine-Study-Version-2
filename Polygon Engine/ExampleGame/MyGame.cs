using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Mat4 m = new Mat4(

                new Vec4(-3, 2, 5),
                new Vec4(-9, 5, 6),
                new Vec4(3, 3, 5),
                new Vec4(3, 3, 5)
            );

            Mat4 m2 = new Mat4(

                new Vec4(6, 2, 5),
                new Vec4(-9, 2, 6),
                new Vec4(7, 9, -5),
                new Vec4(4, 1, 3)
            );

            Mat4 m3 = m * m2;

            /* Console.WriteLine("{0} {1} {2} {3}", m3.x1, m3.y1, m3.z1, m3.w1);
             Console.WriteLine("{0} {1} {2} {3}", m3.x2, m3.y2, m3.z2, m3.w2);
             Console.WriteLine("{0} {1} {2} {3}", m3.x3, m3.y3, m3.z3, m3.w3);
             Console.WriteLine("{0} {1} {2} {3}", m3.x4, m3.y4, m3.z4, m3.w4);*/

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
