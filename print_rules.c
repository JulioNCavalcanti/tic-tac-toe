#include <stdio.h>
#include "print_header.h"
#include "return_to_menu.h"
#include "print_menu.h"
#include "colors.h"

void print_rules()
{
    print_header();

    printf("|                                                                          |\n");
    printf("|                              ---------------                             |\n");
    printf("|                             |     %sRULES%s     |                            |\n", BLUE, RESET);
    printf("|                              ---------------                             |\n");
    printf("|                                                                          |\n");
    printf("| %s1. Objective:%s                                                            |\n", PURPLE, RESET);
    printf("|    - The aim of the game is to get a line of three identical symbols     |\n");
    printf("|      in a horizontal, vertical or diagonal line on the board.            |\n");
    printf("|                                                                          |\n");
    printf("| %s2. Board:%s                                                                |\n", PURPLE, RESET);
    printf("|    - The board is a 3x3 grid, totaling nine spaces.                      |\n");
    printf("|                                                                          |\n");
    printf("| %s3. Symbols:%s                                                              |\n", PURPLE, RESET);
    printf("|    - Two players take part, one using \"X\" and the other \"O\".             |\n");
    printf("|      They alternate shifts.                                              |\n");
    printf("|      In this game, the first to play is determined at random.            |\n");
    printf("|                                                                          |\n");
    printf("| %s4. Shifts:%s                                                               |\n", PURPLE, RESET);
    printf("|    - The players make their moves alternately, one at a time.            |\n");
    printf("|                                                                          |\n");
    printf("| %s5. Plays:%s                                                                |\n", PURPLE, RESET);
    printf("|    - A player places his token on an empty space on the board            |\n");
    printf("|      during your shift.                                                  |\n");
    printf("|                                                                          |\n");
    printf("| %s6. Victory:%s                                                              |\n", PURPLE, RESET);
    printf("|    - The player who first gets a line of three of their own              |\n");
    printf("|      symbols (X or O) in any direction (horizontal, vertical             |\n");
    printf("|      or diagonal) is declared the winner.                                |\n");
    printf("|                                                                          |\n");
    printf("| %s7. Tie:%s                                                                  |\n", PURPLE, RESET);
    printf("|    - If all nine positions are filled and no player gets a line of       |\n");
    printf("|      three, the game ends in a draw, known as \"old\" or \"draw\".           |\n");
    printf("|                                                                          |\n");
    printf("| %s8. Game over:%s                                                            |\n", PURPLE, RESET);
    printf("|    - The game ends as soon as one player wins or a draw occurs.          |\n");
    printf("|      In the event of a win, the winning player is announced.             |\n");
    printf("|                                                                          |\n");
    printf(" -------------------------------------------------------------------------- \n");

    if (return_to_menu())
    {
        print_menu();
    }
}