/*
This function is used to capture the menu option the user
has chosen and forward it to the corresponding page.
*/

#include <stdio.h>
#include <stdlib.h>
#include "clear_the_buffer.h"
#include "print_the_error_message.h"
#include "start_the_game.h"
#include "print_the_rules.h"
#include "print_about.h"
#include "print_the_thank_you_message.h"
#include "colors_definitions.h"

void get_menu_option()
{
    int option_chosen = 0;

    while (1)
    {
        printf("\n");
        printf("%sEnter an option (1-4): %s", BLUE, RESET);
        scanf("%d", &option_chosen);
        clear_the_buffer();

        if (option_chosen != 1 && option_chosen != 2 && option_chosen != 3 && option_chosen != 4)
        {
            print_the_error_message(1);
            continue;
        }
        break;
    }

    switch (option_chosen)
    {
    case 1:
        start_the_game();
        break;
    case 2:
        print_the_rules();
        break;
    case 3:
        print_about();
        break;
    case 4:
        print_the_thank_you_message();
        exit(0);
        break;
    }
}