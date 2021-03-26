using System;
using Polygon;
using Polygon.GameStarter;

namespace ExampleGame
{
    class MyGame
    {
        public static void Main()
        {
            Vec3 vec1 = new Vec3(3, 1, 5);
            Vec3 vec2 = new Vec3(3, 5, 3);
            Vec3 vec3 = vec1;

            vec3 = Vec3.Normalize(new Vec3(5, 5, 5));

            //Console.WriteLine(vec3.Lenght);

            Console.WriteLine(vec3.x);
            Console.WriteLine(vec3.y);
            Console.WriteLine(vec3.z);

            Game.Create("hello", 800, 600);
            Game.Loop();
            Game.Close();
        }
    }
}
