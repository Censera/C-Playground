#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int toNumber(char ch){
    switch (ch)
    {
    case 'R':
    case 'r':
        return 1;
        break;
    case 'P':
    case 'p':
        return 2;
        break;
    case 'S':
    case 's':
        return 3;
        break;
    case 'q':
        return 4;
        break;
    default:
        return -1;
        break;
    }
}
typedef struct {
    int wins, loses, ties;
} data;

int main () {
    srand(time(NULL));
    int Number = 3;
    char player;
    data gameState = {0, 0, 0};

    while (player != 4) {
        int computer = (rand() % Number) + 1;
        printf("[R]ock, [P]aper, [S]cissors [q]uit: "); 
        scanf(" %c", &player);

        player = toNumber(player);

        if (player == -1) {
            printf("Invalid input\n");
        }

        if (player == computer) {
            printf("Tie!\n");
    
            ++gameState.ties;
      } else if ( ( player == 1 && computer == 3 ) ||
                   ( player == 3 && computer == 2 ) ||
                   ( player == 2 && computer == 1 )
                ) {
            printf("You Won!\n");

            ++gameState.wins;
       } else {
            printf("You Lose!\n");
           ++gameState.loses;
        }
        printf("Wins: %d; Loses: %d; Ties: %d\n",gameState.wins, gameState.loses, gameState.ties);
    }
    return 0;
}
