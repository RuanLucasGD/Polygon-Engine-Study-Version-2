using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Mat3
    {
        private const string DLL_NAME = "Core.dll";

        public float x1, y1, z1;
        public float x2, y2, z2;
        public float x3, y3, z3;

        public Mat3(Vec3 a, Vec3 b, Vec3 c)
        {
            this.x1 = a.x;
            this.y1 = a.y;
            this.z1 = a.z;

            this.x2 = b.x;
            this.y2 = b.y;
            this.z2 = b.z;

            this.x3 = c.x;
            this.y3 = c.y;
            this.z3 = c.z;
        }

        [DllImport(DLL_NAME, EntryPoint = "Mat3Multiply")] public extern static Mat3 Multiply(Mat3 a, Mat3 b);
        [DllImport(DLL_NAME, EntryPoint = "Mat3MultiplyF")] public extern static Mat3 Multiply(Mat3 a, float v);

        public static Mat3 operator *(Mat3 a, Mat3 b) { return Multiply(a, b); }

        public static Mat3 operator *(Mat3 a, float v) { return Multiply(a, v); }
    }
}
