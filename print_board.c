#include <stdio.h>
#include "print_header.h"
#include "get_board.h"

void print_board()
{
    print_header();

    char(*board)[76] = get_board();

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 76; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}