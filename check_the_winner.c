#include "get_board.h"

int check_the_winner(char player)
{
    char(*board)[76] = get_board();

    if ( // Line
        (board[6][33] == player && board[6][37] == player && board[6][41] == player) ||
        (board[8][33] == player && board[8][37] == player && board[8][41] == player) ||
        (board[10][33] == player && board[10][37] == player && board[10][41] == player) ||
        // Column
        (board[6][33] == player && board[8][33] == player && board[10][33] == player) ||
        (board[6][37] == player && board[8][37] == player && board[10][37] == player) ||
        (board[6][41] == player && board[8][41] == player && board[10][41] == player) ||
        // Diagonal
        (board[6][33] == player && board[8][37] == player && board[10][41] == player) ||
        (board[10][33] == player && board[8][37] == player && board[6][41] == player))
    {
        return 1;
    }

    return 0;
}