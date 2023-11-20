/*
This function clears the display of the number of matches
*/

#include "get_the_board.h"

int clear_the_match_display()
{
    char(*board)[76] = get_the_board();

    for (int j = 17; j <= 22; j++)
    {
        board[14][j] = ' ';
    }
}