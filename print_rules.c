#include <stdio.h>
#include "print_header.h"
#include "return_to_menu.h"
#include "print_menu.h"

void print_rules()
{
    print_header();
    printf("|                                                                          |\n");
    printf("|                              ---------------                             |\n");
    printf("|                             |     RULES     |                            |\n");
    printf("|                              ---------------                             |\n");
    printf("|                                                                          |\n");
    printf("| 1. Objective:                                                            |\n");
    printf("|    - The aim of the game is to get a line of three identical symbols     |\n");
    printf("|      in a horizontal, vertical or diagonal line on the board.            |\n");
    printf("|                                                                          |\n");
    printf("| 2. Board:                                                                |\n");
    printf("|    - The board is a 3x3 grid, totaling nine spaces.                      |\n");
    printf("|                                                                          |\n");
    printf("| 3. Symbols:                                                              |\n");
    printf("|    - Two players take part, one using \"X\" and the other \"O\".             |\n");
    printf("|      They alternate shifts.                                              |\n");
    printf("|      In this game, the first to play is determined at random.            |\n");
    printf("|                                                                          |\n");
    printf("| 4. Shifts:                                                               |\n");
    printf("|    - The players make their moves alternately, one at a time.            |\n");
    printf("|                                                                          |\n");
    printf("| 5. Plays:                                                                |\n");
    printf("|    - A player places his token on an empty space on the board            |\n");
    printf("|      during your shift.                                                  |\n");
    printf("|                                                                          |\n");
    printf("| 6. Victory:                                                              |\n");
    printf("|    - The player who first gets a line of three of their own              |\n");
    printf("|      symbols (X or O) in any direction (horizontal, vertical             |\n");
    printf("|      or diagonal) is declared the winner.                                |\n");
    printf("|                                                                          |\n");
    printf("| 7. Tie:                                                                  |\n");
    printf("|    - If all nine positions are filled and no player gets a line of       |\n");
    printf("|      three, the game ends in a draw, known as \"old\" or \"draw\".           |\n");
    printf("|                                                                          |\n");
    printf("| 8. Game over:                                                            |\n");
    printf("|    - The game ends as soon as one player wins or a draw occurs.          |\n");
    printf("|      In the event of a win, the winning player is announced.             |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    if (return_to_menu())
    {
        print_menu();
    }
}