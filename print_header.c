#include <stdio.h>
#include "clear_terminal.h"
#include "colors.h"

void print_header()
{
    clear_terminal();

    printf(" -------------------------------------------------------------------------- \n");
    printf("|                                                                          |\n");
    printf("|%s               ___    __     ___       __     ___  __   ___               %s|\n", BLUE, RESET);
    printf("|%s                |  | /  ` __  |   /\\  /  ` __  |  /  \\ |__                %s|\n", BLUE, RESET);
    printf("|%s                |  | \\__,     |  /~~\\ \\__,     |  \\__/ |___               %s|\n", BLUE, RESET);
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");
}
