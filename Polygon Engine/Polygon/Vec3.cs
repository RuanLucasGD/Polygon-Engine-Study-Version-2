using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Vec3
    {
        private const string DLL_NAME = "Core.dll";

        public float x;
        public float y;
        public float z;

        public Vec3(float lenght)
        {
            this.x = lenght;
            this.y = lenght;
            this.z = lenght;
        }

        public Vec3(float x, float y, float z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        [DllImport(DLL_NAME, EntryPoint = "Vec3Magnetude")] private static extern float Magnetude(Vec3 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Sum")] private static extern Vec3 Sum(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Subtract")] private static extern Vec3 Subtract(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Multiply")] private static extern Vec3 Multiply(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Divide")] private static extern Vec3 Divide(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3MultiplyF")] private static extern Vec3 MultiplyF(Vec3 a, float v);
        [DllImport(DLL_NAME, EntryPoint = "Vec3DivideF")] private static extern Vec3 DivideF(Vec3 a, float v);

        public float Lenght { get { return Magnetude(this); } }


        [DllImport(DLL_NAME, EntryPoint = "Vec3Dot")] public static extern float Dot(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3AngleBetween")] public static extern float AngleBetween(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Distance")] public static extern float Distance(Vec3 a, Vec3 b);

        [DllImport(DLL_NAME, EntryPoint = "Vec3Normalize")] public static extern Vec3 Normalize(Vec3 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Cross")] public static extern Vec3 Cross(Vec3 a, Vec3 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec3Lerp")] public static extern Vec3 Lerp(Vec3 a, Vec3 b, float t);

        public static Vec3 operator +(Vec3 a, Vec3 b) { return Sum(a, b); }

        public static Vec3 operator -(Vec3 a, Vec3 b) { return Subtract(a, b); }

        public static Vec3 operator *(Vec3 a, Vec3 b) { return Multiply(a, b); }

        public static Vec3 operator /(Vec3 a, Vec3 b) { return Divide(a, b); }


        public static Vec3 operator *(Vec3 a, float v) { return MultiplyF(a, v); }

        public static Vec3 operator /(Vec3 a, float v) { return DivideF(a, v); }
    }
}
