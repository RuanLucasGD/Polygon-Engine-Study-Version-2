using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Vec4
    {
        private const string DLL_NAME = "Core.dll";

        public float x;
        public float y;
        public float z;
        public float w;

        public Vec4(float lenght)
        {
            this.x = lenght;
            this.y = lenght;
            this.z = lenght;
            this.w = lenght;
        }

        public Vec4(float x, float y)
        {
            this.x = x;
            this.y = y;
            this.z = 0;
            this.w = 0;
        }

        public Vec4(float x, float y, float z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
            this.w = 0;
        }

        public Vec4(float x, float y, float z, float w)
        {
            this.x = x;
            this.y = y;
            this.z = z;
            this.w = w;
        }

        [DllImport(DLL_NAME, EntryPoint = "Vec4Magnetude")] public static extern float Magnetude(Vec4 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Sum")] private static extern Vec4 Sum(Vec4 a, Vec4 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Subtract")] private static extern Vec4 Subtract(Vec4 a, Vec4 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Multiply")] private static extern Vec4 Multiply(Vec4 a, Vec4 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Divide")] private static extern Vec4 Divide(Vec4 a, Vec4 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec4MultiplyF")] private static extern Vec4 MultiplyF(Vec4 a, float v);
        [DllImport(DLL_NAME, EntryPoint = "Vec4DivideF")] private static extern Vec4 DivideF(Vec4 a, float v);

        [DllImport(DLL_NAME, EntryPoint = "Vec4Normalize")] public static extern Vec4 Normalize(Vec4 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Lerp")] public static extern Vec4 Lerp(Vec4 a, Vec4 b, float t);
        [DllImport(DLL_NAME, EntryPoint = "Vec4Dot")] public static extern Vec4 Dot(Vec4 a, Vec4 b);

        public static Vec4 operator +(Vec4 a, Vec4 b) { return Sum(a, b); }

        public static Vec4 operator -(Vec4 a, Vec4 b) { return Subtract(a, b); }

        public static Vec4 operator *(Vec4 a, Vec4 b) { return Multiply(a, b); }

        public static Vec4 operator /(Vec4 a, Vec4 b) { return Divide(a, b); }


        public static Vec4 operator *(Vec4 a, float v) { return MultiplyF(a, v); }

        public static Vec4 operator /(Vec4 a, float v) { return DivideF(a, v); }
    }
}
