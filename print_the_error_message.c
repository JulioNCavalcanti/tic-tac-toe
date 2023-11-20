/*
This function needs one parameter: the error code.

And an error message will be printed on the screen according to the error code.
*/

#include <stdio.h>
#include "continue_the_game.h"
#include "print_the_menu.h"
#include "print_the_board.h"
#include "colors_definitions.h"

void print_the_error_message(int error_code)
{
    switch (error_code)
    {
    case 1:
        printf("\n");
        printf("%s --------------------------------------------------- %s\n", RED, RESET);
        printf("%s| This option does not exist! Enter a valid option. |%s\n", RED, RESET);
        printf("%s --------------------------------------------------- %s\n", RED, RESET);
        continue_the_game();
        print_the_menu();
        break;
    case 2:
        printf("\n");
        printf("%s ------------------------------------------------------- %s\n", RED, RESET);
        printf("%s| This position does not exist! Enter a valid position. |%s\n", RED, RESET);
        printf("%s ------------------------------------------------------- %s\n", RED, RESET);
        continue_the_game();
        print_the_board();
        break;
    case 3:
        printf("\n");
        printf("%s --------------------------------------------------- %s\n", RED, RESET);
        printf("%s| This position is occupied! Enter a free position. |%s\n", RED, RESET);
        printf("%s --------------------------------------------------- %s\n", RED, RESET);
        continue_the_game();
        print_the_board();
        break;
    case 4:
        printf("\n");
        printf("%s --------------------------------------------------------------- %s\n", RED, RESET);
        printf("%s| This option does not exist! Enter an integer between 1 and 9. |%s\n", RED, RESET);
        printf("%s --------------------------------------------------------------- %s\n", RED, RESET);
        continue_the_game();
        print_the_board();
        break;
    }
}