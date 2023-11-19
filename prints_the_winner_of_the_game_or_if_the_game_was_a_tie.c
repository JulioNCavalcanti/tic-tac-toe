#include <stdio.h>
#include "get_board.h"
#include "print_header.h"
#include "colors.h"

void prints_the_winner_of_the_game_or_if_the_game_was_a_tie()
{
    char(*board)[76] = get_board();
    char winner = '\0';
    const char *color;

    if (board[2][30] > board[2][48])
    {
        winner = 'X';
        color = CYAN;
    }
    else if (board[2][30] < board[2][48])
    {
        winner = 'O';
        color = PURPLE;
    }
    else
    {
        color = GREEN;

        print_header();

        printf("|                                                                          |\n");
        printf("|                              --------------                              |\n");
        printf("|                             |     %sTie!%s     |                             |\n", color, RESET);
        printf("|                              --------------                              |\n");
        printf("|                                                                          |\n");
        printf(" -------------------------------------------------------------------------- \n");

        return;
    }

    print_header();

    printf("|                                                                          |\n");
    printf("|              ----------------------------------------------              |\n");
    printf("|             |     %sPlayer %c is the winner of the game!%s      |             |\n", color, winner, RESET);
    printf("|              ----------------------------------------------              |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");
}