#include "get_board.h"
#include "print_board.h"

void clear_the_tic_tac_toe_board()
{
    char(*board)[76] = get_board();

    for (int i = 7; i <= 11; i += 2)
    {
        for (int j = 33; j <= 41; j += 4)
        {
            board[i][j] = ' ';
        }
    }

    print_board();
}