using System.Runtime.InteropServices;

namespace Polygon
{
    public static class MathP
    {
        private const string DLL_NAME = "Core.dll";

        public const float PI = 3.14159274f;       // 180 / PI_RAD
        public const float PI_RAD = 57.2957795f;	// (180 / PI)

        [DllImport(DLL_NAME)] public static extern float Sqrt(float v);
        [DllImport(DLL_NAME)] public static extern float RadToDegress(float r);
        [DllImport(DLL_NAME)] public static extern float DegressToRad(float v);
        [DllImport(DLL_NAME)] public static extern float Abs(float v);
        [DllImport(DLL_NAME)] public static extern float Sin(float r);
        [DllImport(DLL_NAME)] public static extern float Cos(float r);
        [DllImport(DLL_NAME)] public static extern float Tan(float r);
        [DllImport(DLL_NAME)] public static extern float Asin(float r);
        [DllImport(DLL_NAME)] public static extern float Asos(float r);
        [DllImport(DLL_NAME)] public static extern float Atan(float r);

        [DllImport(DLL_NAME)] public static extern float Lerp(float a, float b, float t);
        [DllImport(DLL_NAME)] public static extern float Min(float a, float b);
        [DllImport(DLL_NAME)] public static extern float Max(float a, float b);
        [DllImport(DLL_NAME)] public static extern float Clamp(float v, float min, float max);
        [DllImport(DLL_NAME)] public static extern float Pow(float v, float p);
    }
}
