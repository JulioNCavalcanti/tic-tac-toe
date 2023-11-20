/*
This function checks if the position is empty.

If it is empty it returns 1, otherwise it returns 0.
*/

#include "get_the_board.h"

int check_that_the_position_is_empty(int row, int column)
{
    char(*board)[76] = get_the_board();

    if (board[row][column] == ' ')
    {
        return 1;
    }
    return 0;
}