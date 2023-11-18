#include <stdio.h>
#include "clear_buffer.h"

int return_to_menu()
{
    printf("\n");
    printf("Press Enter to return to the menu... ");

    clear_buffer();

    return 1;
}