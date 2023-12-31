/*
This function is used to check the winner of the match.

It returns 1 if he is the winner, otherwise it returns 0.
*/
#include "get_the_board.h"

int check_the_winner_of_the_match(char player)
{
    char(*board)[76] = get_the_board();

    if ( // Line
        (board[7][33] == player && board[7][37] == player && board[7][41] == player) ||
        (board[9][33] == player && board[9][37] == player && board[9][41] == player) ||
        (board[11][33] == player && board[11][37] == player && board[11][41] == player) ||
        // Column
        (board[7][33] == player && board[9][33] == player && board[11][33] == player) ||
        (board[7][37] == player && board[9][37] == player && board[11][37] == player) ||
        (board[7][41] == player && board[9][41] == player && board[11][41] == player) ||
        // Diagonal
        (board[7][33] == player && board[9][37] == player && board[11][41] == player) ||
        (board[11][33] == player && board[9][37] == player && board[7][41] == player))
    {
        return 1;
    }

    return 0;
}