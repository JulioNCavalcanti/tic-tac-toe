#include <stdio.h>
#include "print_the_title.h"
#include "get_menu_option.h"
#include "colors_definitions.h"

void print_the_menu()
{
    print_the_title();

    printf("|                                                                          |\n");
    printf("|                              -------------                               |\n");
    printf("|                             |     %sMenu%s    |                              |\n", BLUE, RESET);
    printf("|                              -------------                               |\n");
    printf("|                             | %s1%s |  %sPlay %s  |                              |\n", PURPLE, RESET, PURPLE, RESET);
    printf("|                             | %s2%s |  %sRules%s  |                              |\n", PURPLE, RESET, PURPLE, RESET);
    printf("|                             | %s3%s |  %sAbout%s  |                              |\n", PURPLE, RESET, PURPLE, RESET);
    printf("|                             | %s4%s |  %sClose%s  |                              |\n", PURPLE, RESET, PURPLE, RESET);
    printf("|                              -------------                               |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    get_menu_option();
}