/*
This function is used to display the frame and color only the selected elements.
*/

#include <stdio.h>
#include "print_the_title.h"
#include "get_the_board.h"
#include "colors_definitions.h"

void print_the_board()
{
    print_the_title();

    char(*board)[76] = get_the_board();

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 76; j++)
        {
            if ((board[i][j] == 'X' && i != 14) || (i == 2 && (j == 28 || j == 30)))
            {
                printf("%s%c%s", CYAN, board[i][j], RESET);
            }
            else if ((board[i][j] == 'O' && i != 14) || (i == 2 && (j == 46 || j == 48)))
            {
                printf("%s%c%s", PURPLE, board[i][j], RESET);
            }
            else if (i == 2 && (j == 34 || j == 35 || j == 36 || j == 38 || j == 40))
            {
                printf("%s%c%s", GREEN, board[i][j], RESET);
            }
            else if ((i == 14 && (j >= 2 && j <= 15)) || (i == 16 && (j >= 2 && j <= 13)) || (i != 2 && (board[i][j] == '1' || board[i][j] == '2' || board[i][j] == '3' || board[i][j] == 'A' || board[i][j] == 'B' || board[i][j] == 'C')))
            {
                printf("%s%c%s", BLUE, board[i][j], RESET);
            }
            else
            {
                if (i == 14 && (j == 17 || j == 22) && board[14][17] != ' ')
                {
                    printf("%d", board[i][j]);
                }
                else
                {
                    printf("%c", board[i][j]);
                }
            }
        }
        printf("\n");
    }
}