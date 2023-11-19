#include "get_board.h"

void update_the_turn_player_field(char player_icon)
{
    char(*board)[76] = get_board();

    board[16][15] = player_icon;
}