using System.Runtime.InteropServices;

namespace Polygon.GameStarter
{
    public class Game
    {
        private const string DLL_NAME = "Core.dll";

        [DllImport(DLL_NAME)]
        extern public static void Create(string name, int width, int height);
        [DllImport(DLL_NAME)]
        extern public static void Loop();
        [DllImport(DLL_NAME)]
        extern public static void Close();
    }
}
