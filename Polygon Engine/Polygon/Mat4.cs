using System.Runtime.InteropServices;

namespace Polygon
{
    public struct Mat4
    {
        private const string DLL_NAME = "Core.dll";

        public float x1, y1, z1, w1;
        public float x2, y2, z2, w2;
        public float x3, y3, z3, w3;
        public float x4, y4, z4, w4;

        public Mat4(Vec4 a, Vec4 b, Vec4 c, Vec4 d)
        {
            this.x1 = a.x;
            this.y1 = a.y;
            this.z1 = a.z;
            this.w1 = a.w;

            this.x2 = b.x;
            this.y2 = b.y;
            this.z2 = b.z;
            this.w2 = a.w;

            this.x3 = c.x;
            this.y3 = c.y;
            this.z3 = c.z;
            this.w3 = a.w;

            this.x4 = d.x;
            this.y4 = d.y;
            this.z4 = d.z;
            this.w4 = d.w;
        }

        public Mat4 Identity => new Mat4(

            new Vec4(1, 0, 0, 0),
            new Vec4(0, 1, 0, 0),
            new Vec4(0, 0, 1, 0),
            new Vec4(0, 0, 0, 1)
        );

        [DllImport(DLL_NAME, EntryPoint = "Mat4Multiply")] public extern static Mat4 Multiply(Mat4 a, Mat4 b);
        [DllImport(DLL_NAME, EntryPoint = "Mat4MultiplyF")] public extern static Mat4 Multiply(Mat4 a, float v);

        public static Mat4 operator *(Mat4 a, Mat4 b) { return Multiply(a, b); }

        public static Mat4 operator *(Mat4 a, float v) { return Multiply(a, v); }
    }
}
