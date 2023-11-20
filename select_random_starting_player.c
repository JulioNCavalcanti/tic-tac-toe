/*
This function is used to select a random starting player.
*/

#include <stdlib.h>
#include <time.h>

int select_random_starting_player()
{
    srand(time(NULL));
    int random_number = 1 + rand() % 2;

    return random_number;
}
