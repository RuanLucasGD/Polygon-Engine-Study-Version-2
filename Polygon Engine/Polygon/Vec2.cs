using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Vec2
    {
        private const string DLL_NAME = "Core.dll";

        public float x;
        public float y;

        public Vec2(float lenght)
        {
            this.x = lenght;
            this.y = lenght;
        }

        public Vec2(float x, float y)
        {
            this.x = x;
            this.y = y;
        }

        [DllImport(DLL_NAME, EntryPoint = "Vec2Sum")] public extern static Vec2 Sum(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Subtract")] public extern static Vec2 Subtract(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Multiply")] public extern static Vec2 Multiply(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Divide")] public extern static Vec2 Divide(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2MultiplyF")] public extern static Vec2 Multiply(Vec2 a, float v);
        [DllImport(DLL_NAME, EntryPoint = "Vec2DivideF")] public extern static Vec2 Divide(Vec2 a, float v);

        [DllImport(DLL_NAME, EntryPoint = "Vec2Magnetude")] public extern static float Magnetude(Vec2 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Dot")] public extern static float Dot(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2AngleBetween")] public extern static float AngleBetween(Vec2 a, Vec2 b);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Distance")] public extern static float Distance(Vec2 a, Vec2 b);

        [DllImport(DLL_NAME, EntryPoint = "Vec2Normalize")] public extern static Vec2 Normalize(Vec2 v);
        [DllImport(DLL_NAME, EntryPoint = "Vec2Lerp")] public extern static Vec2 Lerp(Vec2 a, Vec2 b, float t);

        public static Vec2 operator +(Vec2 a, Vec2 b) { return Sum(a, b); }

        public static Vec2 operator -(Vec2 a, Vec2 b) { return Subtract(a, b); }

        public static Vec2 operator *(Vec2 a, Vec2 b) { return Multiply(a, b); }

        public static Vec2 operator /(Vec2 a, Vec2 b) { return Divide(a, b); }

        public static Vec2 operator *(Vec2 a, float v) { return Multiply(a, v); }

        public static Vec2 operator /(Vec2 a, float v) { return Divide(a, v); }
    }
}
