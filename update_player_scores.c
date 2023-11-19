#include "get_board.h"

void update_player_scores(char player_icon)
{
    char(*board)[76] = get_board();

    if (player_icon == 'X')
    {
        board[2][30] = board[2][30] + 1;
    }
    else if (player_icon == 'O')
    {
        board[2][48] = board[2][48] + 1;
    }
}