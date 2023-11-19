#include <stdio.h>
#include "print_header.h"
#include "captures_the_menu_selection.h"

void print_menu()
{
    print_header();

    printf("|                                                                          |\n");
    printf("|                              -------------                               |\n");
    printf("|                             |     Menu    |                              |\n");
    printf("|                              -------------                               |\n");
    printf("|                             | 1 |  Play   |                              |\n");
    printf("|                             | 2 |  Rules  |                              |\n");
    printf("|                             | 3 |  About  |                              |\n");
    printf("|                             | 4 |  Close  |                              |\n");
    printf("|                              -------------                               |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    captures_the_menu_selection();
}