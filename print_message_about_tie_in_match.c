#include <stdio.h>
#include "colors.h"

void print_message_about_tie_in_match()
{
    printf("\n");
    printf("%s -------------------------------------------------------------------------- %s\n", GREEN, RESET);
    printf("%s|                         The match ended in a tie!                        |%s\n", GREEN, RESET);
    printf("%s -------------------------------------------------------------------------- %s\n", GREEN, RESET);
}