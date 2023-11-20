/*
This function just clears the buffer.
*/

#include <stdio.h>

void clear_the_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}