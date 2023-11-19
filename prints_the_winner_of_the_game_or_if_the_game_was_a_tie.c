#include <stdio.h>
#include "get_board.h"
#include "print_header.h"

void prints_the_winner_of_the_game_or_if_the_game_was_a_tie()
{
    char(*board)[76] = get_board();

    char winner = '\0';

    if (board[2][30] > board[2][48])
    {
        winner = 'X';
    }
    else if (board[2][30] < board[2][48])
    {
        winner = 'O';
    }
    else
    {
        print_header();

        printf("|                                                                          |\n");
        printf("|                              --------------                              |\n");
        printf("|                             |     Tie!     |                             |\n");
        printf("|                              --------------                              |\n");
        printf("|                                                                          |\n");
        printf(" -------------------------------------------------------------------------- \n");

        return;
    }

    print_header();

    printf("|                                                                          |\n");
    printf("|              ----------------------------------------------              |\n");
    printf("|             |     Player %c is the winner of the game!      |             |\n", winner);
    printf("|              ----------------------------------------------              |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");
}