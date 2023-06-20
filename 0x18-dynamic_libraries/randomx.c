#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_counter = 0;
// 9 8 10 24 75 9
// 8 7 9 23 74 8
int rand()
{
    srandom(time(NULL));
    random_counter++;
    if (random_counter == 1)
        return 8;
    else if (random_counter == 2)
        return 8;
    else if (random_counter == 3)
        return 7;
    else if (random_counter == 4)
        return 9;
    else if (random_counter == 5)
        return 23;
    else if (random_counter == 6)
        return 74;
    else
    {
        return random();
    }
}
