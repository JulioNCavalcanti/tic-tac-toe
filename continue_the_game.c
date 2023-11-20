/*
This function is used to wait for the Enter key to be pressed 
and only then will the game continue running.
*/

#include <stdio.h>
#include "clear_the_buffer.h"
#include "colors_definitions.h"

void continue_the_game()
{
    printf("\n");
    printf("%sPress Enter to continue the game... %s", BLUE, RESET);
    clear_the_buffer();
}