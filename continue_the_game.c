#include <stdio.h>
#include "clear_buffer.h"
#include "colors.h"

void continue_the_game()
{
    printf("\n");
    printf("%sPress Enter to continue the game... %s", BLUE, RESET);
    clear_buffer();
}