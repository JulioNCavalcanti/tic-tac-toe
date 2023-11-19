#include <stdio.h>
#include "clear_the_scoreboard.h"
#include "print_board.h"
#include "clear_buffer.h"
#include "sets_the_first_player_at_random.h"
#include "played_capture.h"
#include "check_the_winner_of_the_match.h"
#include "update_player_scores.h"
#include "continue_the_game.h"
#include "update_the_tie.h"
#include "clear_the_tic_tac_toe_board.h"
#include "prints_the_winner_of_the_game_or_if_the_game_was_a_tie.h"
#include "return_to_menu.h"
#include "print_menu.h"
#include "update_the_turn_player_field.h"
#include "clear_the_turn_player_field.h"
#include "update_the_current_match_field.h"
#include "clear_the_current_match_field.h"
#include "print_match_victory_message.h"
#include "print_message_about_tie_in_match.h"
#include "colors.h"

void start_the_game()
{
    print_board();

    char player_icon = '\0';
    int current_match = 1;
    int matches = 0;

    while (1)
    {
        printf("\n");
        printf("%sEnter the number of matches (1-9): %s", BLUE, RESET);
        scanf("%d", &matches);
        clear_buffer();

        if (matches < 1 || matches > 9)
        {
            printf("\n");
            printf("%s --------------------------------------------------- %s\n", RED, RESET);
            printf("%s| This option does not exist! Enter a valid option. |%s\n", RED, RESET);
            printf("%s --------------------------------------------------- %s\n", RED, RESET);
            continue_the_game();
            print_board();
            continue;
        }
        break;
    }

    while (current_match <= matches)
    {
        update_the_current_match_field(current_match, matches);
        int current_player = sets_the_first_player_at_random();
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

                update_the_turn_player_field(player_icon);
                played_capture(player_icon);

                number_of_move++;
                if (number_of_move >= 3 && (check_the_winner_of_the_match(player_icon)))
                {
                    update_player_scores(player_icon);
                    print_board();
                    print_match_victory_message(player_icon);
                    continue_the_game();
                    break;
                }

                current_player++;
            }
            else
            {
                update_the_tie();
                print_board();
                print_message_about_tie_in_match();
                continue_the_game();
                break;
            }
        }

        current_match++;
        clear_the_tic_tac_toe_board();
        clear_the_current_match_field();
        clear_the_turn_player_field();
    }

    prints_the_winner_of_the_game_or_if_the_game_was_a_tie();
    clear_the_scoreboard();

    if (return_to_menu())
    {
        print_menu();
    }
}