
#include "../include/header.h"
#include "../include/conio.h"


#define SIZE 27
#define FIELD_SIZE 10
#define PLAYER_1 0
#define PLAYER_2 ~PLAYER_1


typedef enum
{
    INIT,
    DRAW,
    ACTION,
    EXIT
}eGameState;

typedef enum
{
    EMPTY = 0,
    SHOT,
    STRIKE,
    DRAWNED,
    SHIP,
    ALL
}eMapInfo;

char DrawSimbol[ALL] = 
{
    ' ',
    '*',
    'X',
    '#',
    '@',
};

char *MAP[SIZE] = 
{
    "  0123456789    0123456789 ",
    "0|          | 0|          |",
    "1|          | 1|          |",
    "2|          | 2|          |",
    "3|          | 3|          |",
    "4|          | 4|          |",
    "5|          | 5|          |",
    "6|          | 6|          |",
    "7|          | 7|          |",
    "8|          | 8|          |",
    "9|          | 9|          |"
};

void    generate_pl(eMapInfo *);
void    print_map(eMapInfo *);

int     main()
{
    eGameState game_state = INIT;
    unsigned char is_run = 1;

    eMapInfo *player;
    int pl_turn = PLAYER_1;

    eMapInfo pl_1[110] = {EMPTY};
    eMapInfo pl_2[110] = {EMPTY};
    char ch;


    while (is_run)
    {
        switch (game_state)
        {
            case INIT:
            {
                
                generate_pl(pl_1);
                generate_pl(pl_2);

                pl_1[55] = DRAWNED;
                pl_1[56] = DRAWNED;
                pl_1[57] = DRAWNED;


                pl_2[22] = DRAWNED;
                pl_2[32] = DRAWNED;
                pl_2[43] = DRAWNED;

                game_state = DRAW;
                break;
            }
            case DRAW:
            {
                system("clear");

                
                player = (pl_turn == PLAYER_1) ? pl_2 : pl_1;

                print_map(player);

                ch = getchar();
                switch (ch)
                {
                    case 72:
                        printf("Стрелка вверх\n");
                        break;
                    case 80:
                        printf("Стрелка вниз\n");
                        break;
                    case 75:
                        printf("Стрелка влево\n");
                    case 77:
                        printf("Стрелка вправо\n");
                        break;
                    default:
                        printf("nothing");
                }
                game_state = ACTION;
                break;
            }
            case ACTION:
            {
                pl_turn = ~pl_turn;
                game_state = (ch == 'q') ? EXIT : DRAW;
                break;
            }
            case EXIT:
            {
                is_run = 0;
                break;
            }
        }
    }
    return (0);
}

void    print_map(eMapInfo *ap_data)
{
    printf("%s\n", MAP[0]);

    for (int i = 1; i <= FIELD_SIZE; i++)
    {
        printf("%c%c", MAP[i][0], MAP[i][1]);

        for(int k = 2; k < 12; k++)    // 1 field
        {
            printf("%c", DrawSimbol[ap_data[i * FIELD_SIZE + (k-2)]]);

        }

        for (int k = 12; k < 16; k++)
            printf("%c", MAP[i][k]);

        for(int k = 16; k < (SIZE-1); k++)
            printf("%c", MAP[i][k]);

        printf("%c\n", MAP[i][SIZE - 1]);
    }
        
}


void    generate_pl(eMapInfo *player)
{
	/*
	  "  0123456789    0123456789 "
	, " 0 H   H    |  0          |"
	, " 1 H H      |  1          |"
	, " 2 H        |  2          |"
	, " 3          |  3          |"
	, " 4          |  4          |"
	, " 5          |  5          |"
	, " 6          |  6          |"
	, " 7   H      |  7          |"
	, " 8          |  8          |"
	, " 9  H       |  9          |"
	*/

	player[1 * FIELD_SIZE + 1] = SHIP;
	player[1 * FIELD_SIZE + 5] = SHIP;
	player[2 * FIELD_SIZE + 1] = SHIP;
	player[2 * FIELD_SIZE + 3] = SHIP;
	player[3 * FIELD_SIZE + 1] = SHIP;
	player[8 * FIELD_SIZE + 3] = SHIP;
	player[10 * FIELD_SIZE + 2] = SHIP;
}
