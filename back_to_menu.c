/*
This function is used to return to the menu when the Enter key is pressed.
*/

#include <stdio.h>
#include "clear_the_buffer.h"
#include "print_the_menu.h"
#include "colors_definitions.h"

void back_to_menu()
{
    printf("\n");
    printf("%sPress Enter to return to the menu... %s", BLUE, RESET);
    clear_the_buffer();
    print_the_menu();
}