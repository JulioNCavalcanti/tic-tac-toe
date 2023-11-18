#ifdef _WIN32
#include <windows.h> // Windows
#else
#include <unistd.h> // Linux and macOS
#endif

void delay(int milliseconds)
{
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}