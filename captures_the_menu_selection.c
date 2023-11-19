#include <stdio.h>
#include <stdlib.h>
#include "clear_buffer.h"
#include "continue_the_game.h"
#include "print_menu.h"
#include "start_the_game.h"
#include "print_rules.h"
#include "print_about.h"
#include "print_thank_you_message.h"
#include "colors.h"

void captures_the_menu_selection()
{
    int choice = 0;

    while (1)
    {
        printf("\n");
        printf("%sEnter an option (1-4): %s", BLUE, RESET);
        scanf("%d", &choice);
        clear_buffer();

        if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            printf("\n");
            printf("%s --------------------------------------------------- %s\n", RED, RESET);
            printf("%s| This option does not exist! Enter a valid option. |%s\n", RED, RESET);
            printf("%s --------------------------------------------------- %s\n", RED, RESET);
            continue_the_game();
            print_menu();
            continue;
        }
        break;
    }

    switch (choice)
    {
    case 1:
        start_the_game();
        break;
    case 2:
        print_rules();
        break;
    case 3:
        print_about();
        break;
    case 4:
        print_thank_you_message();
        exit(0);
    }
}