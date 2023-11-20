/*
This function only serves to display a thank you message before ending the game.
*/

#include <stdio.h>
#include "print_the_title.h"
#include "quit_the_game.h"
#include "colors_definitions.h"

void print_the_thank_you_message()
{
    print_the_title();

    printf("|                                                                          |\n");
    printf("|            --------------------------------------------------            |\n");
    printf("|           |     %sThank you very much for playing my game!%s     |           |\n", PURPLE, RESET);
    printf("|           |                %sSee you next time.%s                |           |\n", PURPLE, RESET);
    printf("|            --------------------------------------------------            |\n");
    printf("|                                                                          |\n");
    printf(" --------------------------------------------------------------------------  \n");

    quit_the_game();
}