/*
This function clears the score display.
*/

#include "get_the_board.h"

void clear_the_scoreboard()
{
    char(*board)[76] = get_the_board();

    board[2][30] = '0';
    board[2][40] = '0';
    board[2][48] = '0';
}