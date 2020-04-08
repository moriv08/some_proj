
#include "../include/header.h"


int main()
{

    int player_1[SKILS] = {0};
    int player_2[SKILS] = {0};

    init_params(player_2);
    init_params(player_1);
    init_params(player_2);
    init_params(player_1);

    print_skills(player_1);
    init_params(player_1);

    print_skills(player_1);
    init_params(player_1);

    printf("_________________________\n");

    print_skills(player_2);

    return (0);
}






// char *FIELD[7] =
// {
//     " 1 2 3 ", 
//     "1 | |  ", 
//     "2 | |  ",
//     "3 | |  "
// };

// typedef enum
// {
//     START,
//     GAME,
//     END
// }GAME_STATUS;

// typedef enum
// {
//     X,
//     O,
// }MOUVE;

// char SIMB[] = {'X', 'O'};

// void    print_field(char **field);

// int main()
// {
//     SIMB pl_1[5] = {X};
//     SIMB pl_2[5] = {O};
//     int mouve;
//     SIMB *tmp;
//     int player = player_1;

//     switch(GAME_STATUS)
//     {
//         case START:
//             print_field(FIELD);
//             GAME_STATUS = GAME;
//                 break;
//         case GAME:
//             system("clear");0
            
//             player = (player == player_1) ? player_2 : player_1; 
//             scanf("%d", mouve);
//             pl_1[mouve] = 'X';
//             pl_2[mouve+=1] = 'O';

//             tmp = (player == player_1) ? pl_2 : pl_1;

//             print_field(FIELD, tmp);

//                 break;
//         case END:
//                 break;
//     }

//     return (0);
// }

// void    print_field(char **field, SIMB *tmp)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int k = 0; k < 7; k++)
//         if (field[])
//             printf("%c", field[i][k]);
//         printf("\n");
//     }
    
//     for (int i = 0; i < 4; i++)
//     {
//         for (int k = 0; k < 7; k++)
//         if (field[])
//             printf("%s", tmp[1s]);
//         printf("\n");
//     }
// }

// void    make_mouve(SIMB *player, unsigned short x)
// {
//     unsigned short y;
//     // 10, 12, 14, 
//     // 17, 19, 21,
//     // 24, 26, 28
//     switch (x)
//         case 7:
//             y = 10;
//             break;
//         case 8:
//             y = 12;
//             break;
//         case 9: 
//             y = 14;
//             break;
//         case 4:
//             y = 17;
//             break;
//         case 5:
//             y = 19;
//             break;
//         case 6:
//             y = 21;
//             break;
//         case 1:
//             y = 24;
//             break;
//         case 2:
//             y = 26;
//             break;
//         case 3:
//             y = 28;
//             break;
//         default:
//             break;
//     player[y] = 'X';
// }