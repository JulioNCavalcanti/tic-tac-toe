/*
This function is used to update the match display on the board.
*/

#include "get_the_board.h"

void update_the_match_display_on_the_board(int current_match, int matches)
{
    char(*board)[76] = get_the_board();

    board[14][17] = current_match;
    board[14][18] = ' ';
    board[14][19] = 'O';
    board[14][20] = 'F';
    board[14][21] = ' ';
    board[14][22] = matches;
}