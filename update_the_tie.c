#include "get_board.h"

void update_the_tie()
{
    char(*board)[76] = get_board();

    board[2][40] = board[2][40] + 1;
}