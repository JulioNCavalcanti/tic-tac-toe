#include <stdio.h>
#include "print_header.h"
#include "return_to_menu.h"
#include "print_menu.h"
#include "colors.h"

void print_about()
{
    print_header();

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

    if (return_to_menu())
    {
        print_menu();
    }
}