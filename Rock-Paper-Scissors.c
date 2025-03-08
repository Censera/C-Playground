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
    default:
        return -1;
        break;
    }
}

int main () {
    srand(time(NULL));
    int Number = 3;
    int computer = (rand() % Number) + 1;
    char player;

    printf("[R]ock, [P]aper, [S]cissors :\n"); 
    scanf("%c", &player);

    player = toNumber(player);

    if (player == -1) {
        printf("Invalid input\n");
        return 1;
    }

    if (player == computer) {
        printf("Tie!");

    } else if ( ( player == 1 && computer == 3 ) ||
                ( player == 3 && computer == 2 ) ||
                ( player == 2 && computer == 1 )
              ) {
        printf("You Won!");

    } else {
            printf("You Lose!");
    }

    return 0;
}
