#include "get_board.h"

int checks_if_the_position_is_empty(int row, int column)
{
    char(*board)[76] = get_board();

    if (board[row][column] == ' ')
    {
        return 1;
    }

    return 0;
}