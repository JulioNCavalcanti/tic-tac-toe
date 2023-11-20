/*
This function clears the current player's field.
*/

#include "get_the_board.h"

void clear_the_turn_player_field()
{
    char(*board)[76] = get_the_board();

    board[16][15] = ' ';
}