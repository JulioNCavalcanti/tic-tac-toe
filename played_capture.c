#include <stdio.h>
#include <ctype.h>
#include "print_board.h"
#include "clear_buffer.h"
#include "delay.h"
#include "checks_if_the_position_is_empty.h"
#include "get_board.h"

void played_capture(char player)
{
    print_board();

    while (1)
    {
        int line = 0;
        char column = '\0';
        int row_position = 0;
        int column_position = 0;

        while (1)
        {
            printf("\n");
            printf("Enter the position in row-column format (e.g. 2B): ");
            scanf("%d%c", &line, &column);
            clear_buffer();

            column = toupper(column);

            if ((line != 1 && line != 2 && line != 3) || (column != 'A' && column != 'B' && column != 'C'))
            {
                printf("\n");
                printf(" ------------------------------------------------------------------------- \n");
                printf("| This position does not exist! Enter a valid position. Wait 3 seconds... |\n");
                printf(" ------------------------------------------------------------------------- \n");
                delay(3000);
                continue;
            }

            break;
        }

        switch (line)
        {
        case 1:
            row_position = 7;
            break;
        case 2:
            row_position = 9;
            break;
        case 3:
            row_position = 11;
            break;
        }

        switch (column)
        {
        case 'A':
            column_position = 33;
            break;
        case 'B':
            column_position = 37;
            break;
        case 'C':
            column_position = 41;
            break;
        }

        if (checks_if_the_position_is_empty(row_position, column_position))
        {
            char(*board)[76] = get_board();
            board[row_position][column_position] = player;
            print_board();
            break;
        }
        else
        {
            printf("\n");
            printf(" ---------------------------------------------------------------------- \n");
            printf("| This position is occupied! Insert a free position. Wait 3 seconds... |\n");
            printf(" ---------------------------------------------------------------------- \n");
            delay(3000);
            continue;
        }
    }
}
