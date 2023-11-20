/*
This function is used to update the current display of the players on the board.
*/

#include "get_the_board.h"

void update_the_current_display_of_the_players_on_the_board(char player_icon)
{
    char(*board)[76] = get_the_board();

    board[16][15] = player_icon;
}