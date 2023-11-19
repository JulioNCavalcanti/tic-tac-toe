#include <stdio.h>
#include "print_header.h"
#include "captures_the_menu_selection.h"
#include "colors.h"

void print_menu()
{
    print_header();

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

    captures_the_menu_selection();
}