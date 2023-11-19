#include <stdio.h>
#include "print_header.h"
#include "colors.h"

void print_thank_you_message()
{
    print_header();

    printf("|                                                                          |\n");
    printf("|            --------------------------------------------------            |\n");
    printf("|           |     %sThank you very much for playing my game!%s     |           |\n", PURPLE, RESET);
    printf("|           |                %sSee you next time.%s                |           |\n", PURPLE, RESET);
    printf("|            --------------------------------------------------            |\n");
    printf("|                                                                          |\n");
    printf(" --------------------------------------------------------------------------  \n");
}