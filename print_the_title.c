/*
This function only serves to print the game title.
*/

#include <stdio.h>
#include "clear_the_terminal.h"
#include "colors_definitions.h"

void print_the_title()
{
    clear_the_terminal();

    printf(" -------------------------------------------------------------------------- \n");
    printf("|                                                                          |\n");
    printf("|%s               ___    __     ___       __     ___  __   ___               %s|\n", BLUE, RESET);
    printf("|%s                |  | /  ` __  |   /\\  /  ` __  |  /  \\ |__                %s|\n", BLUE, RESET);
    printf("|%s                |  | \\__,     |  /~~\\ \\__,     |  \\__/ |___               %s|\n", BLUE, RESET);
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");
}