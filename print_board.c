#include <stdio.h>
#include "print_header.h"
#include "get_board.h"
#include "colors.h"

void print_board()
{
    print_header();

    char(*board)[76] = get_board();

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 76; j++)
        {

            if ((i >= 5 && i <= 11) && (board[i][j] == 'A' || board[i][j] == 'B' || board[i][j] == 'C' || board[i][j] == '1' || board[i][j] == '2' || board[i][j] == '3'))
            {
                printf("%s%c%s", BLUE, board[i][j], RESET);
            }
            else if (i != 16 && board[i][j] == 'X')
            {
                printf("%s%c%s", CYAN, board[i][j], RESET);
            }
            else if (i != 16 && board[i][j] == 'O')
            {
                printf("%s%c%s", PURPLE, board[i][j], RESET);
            }
            else if ((i == 2) && (board[i][j] == 'T' || board[i][j] == 'I' || board[i][j] == 'E'))
            {
                printf("%s%c%s", GREEN, board[i][j], RESET);
            }
            else if ((i == 14 && j > 1 && j < 13) || (i == 16 && j > 1 && j < 14))
            {
                printf("%s%c%s", PURPLE, board[i][j], RESET);
            }
            else
            {
                printf("%c", board[i][j]);
            }
        }
        printf("\n");
    }
}