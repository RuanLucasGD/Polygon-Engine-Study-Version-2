using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Mat2
    {
        private const string DLL_NAME = "Core.dll";

        public float x1, y1;
        public float x2, y2;

        public Mat2(float x1, float y1, float x2, float y2)
        {
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
        }

        [DllImport(DLL_NAME, EntryPoint = "Mat2Sum")] public extern static Mat2 Sum(Mat2 a, Mat2 b);
        [DllImport(DLL_NAME, EntryPoint = "Mat2Subtract")] public extern static Mat2 Subtract(Mat2 a, Mat2 b);
        [DllImport(DLL_NAME, EntryPoint = "Mat2Multiply")] public extern static Mat2 Multiply(Mat2 a, Mat2 b);
        [DllImport(DLL_NAME, EntryPoint = "Mat2MultiplyF")] public extern static Mat2 Multiply(Mat2 a, float v);

        public static Mat2 operator +(Mat2 a, Mat2 b) { return Sum(a, b); }

        public static Mat2 operator -(Mat2 a, Mat2 b) { return Subtract(a, b); }

        public static Mat2 operator *(Mat2 a, Mat2 b) { return Multiply(a, b); }

        public static Mat2 operator *(Mat2 a, float v) { return Multiply(a, v); }
    }
}
