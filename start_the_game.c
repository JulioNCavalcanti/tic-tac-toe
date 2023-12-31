/*
This function starts the game.
*/

#include <stdio.h>
#include "print_the_board.h"
#include "clear_the_buffer.h"
#include "print_the_error_message.h"
#include "update_the_match_display_on_the_board.h"
#include "select_random_starting_player.h"
#include "update_the_current_display_of_the_players_on_the_board.h"
#include "get_player_movement.h"
#include "check_the_winner_of_the_match.h"
#include "update_player_scores.h"
#include "print_match_victory_message.h"
#include "continue_the_game.h"
#include "update_the_tie.h"
#include "print_message_about_tie_in_match.h"
#include "clear_the_tic_tac_toe_board.h"
#include "clear_the_match_display.h"
#include "clear_the_turn_player_field.h"
#include "prints_the_winner_of_the_game_or_if_the_game_was_a_tie.h"
#include "clear_the_scoreboard.h"
#include "back_to_menu.h"
#include "colors_definitions.h"

void start_the_game()
{
    print_the_board();

    char player_icon = '\0';
    int current_match = 1;
    int matches = 0;

    while (1)
    {
        printf("\n");
        printf("%sEnter the number of matches (1-9): %s", BLUE, RESET);
        scanf("%d", &matches);
        clear_the_buffer();

        if (matches < 1 || matches > 9)
        {
            print_the_error_message(4);
            continue;
        }
        break;
    }

    while (current_match <= matches)
    {
        update_the_match_display_on_the_board(current_match, matches);
        int current_player = select_random_starting_player();
        int number_of_move = 1;

        while (1)
        {
            if (number_of_move <= 9)
            {
                if (current_player % 2 != 0)
                {
                    player_icon = 'X';
                }

                else
                {
                    player_icon = 'O';
                }

                update_the_current_display_of_the_players_on_the_board(player_icon);
                get_player_movement(player_icon);

                number_of_move++;
                if (number_of_move >= 3 && (check_the_winner_of_the_match(player_icon)))
                {
                    update_player_scores(player_icon);
                    print_the_board();
                    print_match_victory_message(player_icon);
                    continue_the_game();
                    break;
                }

                current_player++;
            }
            else
            {
                update_the_tie();
                print_the_board();
                print_message_about_tie_in_match();
                continue_the_game();
                break;
            }
        }

        current_match++;
        clear_the_tic_tac_toe_board();
        clear_the_match_display();
        clear_the_turn_player_field();
    }

    prints_the_winner_of_the_game_or_if_the_game_was_a_tie();
    clear_the_scoreboard();
    back_to_menu();
}