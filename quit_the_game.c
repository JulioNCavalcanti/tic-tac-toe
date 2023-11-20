/*
This function closes the game at the click of the enter key.
*/

#include <stdio.h>
#include "clear_the_buffer.h"
#include "colors_definitions.h"

void quit_the_game()
{
    printf("\n");
    printf("%sPress Enter to quit the game... %s", BLUE, RESET);
    clear_the_buffer();
}