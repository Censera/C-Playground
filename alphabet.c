#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char getLetter;
    int stringLength = strlen(alphabet);
    int randvalue = rand() % stringLength;
    char winLetter = alphabet[randvalue];
    int attempts = 1;
    srand(time(NULL));

    printf("- Guess a letter : ", winLetter);
    scanf("%c", &getLetter);
    getLetter = toupper(getLetter);

    while (attempts < stringLength) { 
        if (getLetter!=winLetter) {
           printf("[%d] Not '%c',\t", attempts, getLetter);
           scanf("\n%c", &getLetter);
           getLetter = toupper(getLetter);

          ++attempts;
        } else if(attempts>26) {
            printf("You lost, it's %c", winLetter);
            break;
        } else {
            printf("You won with %d attempts", attempts);
            break;
        }
    }
    return 0;
}
