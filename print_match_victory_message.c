#include <stdio.h>
#include "colors.h"

void print_match_victory_message(char player_icon)
{
    const char *color;

    if (player_icon == 'X')
    {
        color = CYAN;
    }
    else if (player_icon == 'O')
    {
        color = PURPLE;
    }

    printf("\n");
    printf("%s -------------------------------------------------------------------------- %s\n", color, RESET);
    printf("%s|                         Player %c won that match!                         |%s\n", color, player_icon, RESET);
    printf("%s -------------------------------------------------------------------------- %s\n", color, RESET);
}