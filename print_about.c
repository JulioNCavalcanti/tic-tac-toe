/*
This function only serves to print information about the game developer
*/

#include <stdio.h>
#include "print_the_title.h"
#include "back_to_menu.h"
#include "colors_definitions.h"

void print_about()
{
    print_the_title();

    printf("|                                                                          |\n");
    printf("|                             -----------------                            |\n");
    printf("|                            |     %sCREDITS%s     |                           |\n", BLUE, RESET);
    printf("|                             -----------------                            |\n");
    printf("|                                                                          |\n");
    printf("| %sDevelopment:%s                                                             |\n", PURPLE, RESET);
    printf("|     - Julio Cavalcanti                                                   |\n");
    printf("|                                                                          |\n");
    printf("| %sGitHub:%s                                                                  |\n", PURPLE, RESET);
    printf("|     - https://github.com/JulioNCavalcanti                                |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    back_to_menu();
}