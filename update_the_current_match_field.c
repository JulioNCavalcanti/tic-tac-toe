#include "get_board.h"

void update_the_current_match_field(int current_match, int matches)
{
    char(*board)[76] = get_board();

    board[14][17] = current_match;
    board[14][18] = ' ';
    board[14][19] = 'O';
    board[14][20] = 'F';
    board[14][21] = ' ';
    board[14][22] = matches;
}