/*
This function captures the player's movement.
*/

#include <stdio.h>
#include <ctype.h>
#include "print_the_board.h"
#include "clear_the_buffer.h"
#include "check_that_the_position_is_empty.h"
#include "get_the_board.h"
#include "print_the_board.h"
#include "print_the_error_message.h"
#include "colors_definitions.h"

void get_player_movement(char player)
{
    print_the_board();

    while (1)
    {
        int line = 0;
        char column = '\0';
        int row_position = 0;
        int column_position = 0;

        while (1)
        {
            printf("\n");
            printf("%sEnter the position in row-column format (e.g. 2B): %s", BLUE, RESET);
            scanf("%1d%c", &line, &column);
            clear_the_buffer();

            column = toupper(column);

            if ((line != 1 && line != 2 && line != 3) || (column != 'A' && column != 'B' && column != 'C'))
            {
                print_the_error_message(2);
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

        if (check_that_the_position_is_empty(row_position, column_position))
        {
            char(*board)[76] = get_the_board();
            board[row_position][column_position] = player;
            print_the_board();
            break;
        }
        else
        {
            print_the_error_message(3);
            continue;
        }
    }
}