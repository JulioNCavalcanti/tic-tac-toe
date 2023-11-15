#include <stdlib.h>
#include <time.h>

int sets_the_first_player_at_random()
{
    srand(time(NULL));
    int random_number = 1 + rand() % 2;

    return random_number;
}
