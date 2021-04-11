using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Vec4 a = new Vec4(-10);
            a.x = 2;
            a.y = 2;

            Vec4 b = new Vec4(2);

            Vec4 v4 = new Vec4(2);
            Vec4 v4b = Vec4.Dot(new Vec4(4, 5, 1, 4), new Vec4());

            Console.WriteLine(Vec4.Magnetude(new Vec4(5)));


            //Console.WriteLine(v4b.x);
            //Console.WriteLine(v4b.y);
            //Console.WriteLine(v4b.z);
            //Console.WriteLine(v4b.w);
            //Console.WriteLine(c);

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
