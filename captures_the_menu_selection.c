#include <stdio.h>
#include <stdlib.h>
#include "clear_buffer.h"
#include "start_the_game.h"
#include "print_rules.h"
#include "print_about.h"
#include "print_thank_you_message.h"

void captures_the_menu_selection()
{
    int choice = 0;

    while (1)
    {
        printf("\n");
        printf("Enter an option (1-4): ");
        scanf("%1d", &choice);
        clear_buffer();

        if (choice >= 1 && choice <= 4)
        {
            break;
        }
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