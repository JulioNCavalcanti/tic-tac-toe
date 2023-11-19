#include "get_board.h"

int clear_the_current_match_field()
{
    char(*board)[76] = get_board();

    for (int j = 17; j <= 22; j++)
    {
        board[14][j] = ' ';
    }
}