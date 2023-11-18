#include <stdio.h>
#include "print_header.h"
#include "back.h"
#include "print_menu.h"

void print_about()
{
    print_header();
    printf("|                                                                          |\n");
    printf("|                             -----------------                            |\n");
    printf("|                            |     CREDITS     |                           |\n");
    printf("|                             -----------------                            |\n");
    printf("|                                                                          |\n");
    printf("| Development:                                                             |\n");
    printf("|     - Julio Cavalcanti                                                   |\n");
    printf("|                                                                          |\n");
    printf("| GitHub:                                                                  |\n");
    printf("|     - https://github.com/JulioNCavalcanti                                |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    if (back())
    {
        print_menu();
    }
}