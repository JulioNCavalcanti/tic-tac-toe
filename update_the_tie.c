/*
This function is used to change the score of ties on the scoreboard.
*/

#include "get_the_board.h"

void update_the_tie()
{
    char(*board)[76] = get_the_board();

    board[2][40] = board[2][40] + 1;
}