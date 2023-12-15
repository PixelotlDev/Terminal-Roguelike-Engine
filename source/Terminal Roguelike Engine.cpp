#include <iostream>

#if defined(__linux__)
    #define OS_Linux
#elif defined(_WIN32)
    #define OS_Windows
    #include <windows.h>
#endif

int main()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // set fullscreen
    SetConsoleDisplayMode(hStdOut, CONSOLE_FULLSCREEN_MODE, 0);

    COORD bufferSize = { 126, 33 };
    SetConsoleScreenBufferSize(hStdOut, bufferSize);
}
