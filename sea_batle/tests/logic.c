
#include "../include/header.h"

void    print_skills(int player[])
{
    for (int i = 0; i < SKILS; i++)
        switch(i)
        {
            case ARMORE:
                printf("Player armore: %i\n", player[ARMORE]);
                break;
            case RUN:
                printf("Player run: %i\n", player[RUN]);
                break;
            case MAGIC:
                printf("Player magic: %i\n", player[MAGIC]);
                break;
        }
}

void    init_params(int *player)
{
    for (int i = 0; i < SKILS; i++)
        player[i] = (rand() % 10) * 10;
}