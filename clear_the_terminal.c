/*
This function is used to clear the terminal.
*/

#include <stdlib.h>

void clear_the_terminal()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}