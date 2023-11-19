#include <stdio.h>
#include "clear_buffer.h"
#include "colors.h"

int return_to_menu()
{
    printf("\n");
    printf("%sPress Enter to return to the menu... %s", BLUE, RESET);
    clear_buffer();

    return 1;
}