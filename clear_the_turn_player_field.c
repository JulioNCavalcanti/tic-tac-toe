#include "get_board.h"

void clear_the_turn_player_field()
{
    char(*board)[76] = get_board();

    board[16][15] = ' ';
}