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
    int attempts = stringLength; //26
    srand(time(NULL));

    printf("- Guess a letter : ", winLetter);
    scanf("%c", &getLetter);
    getLetter = toupper(getLetter);

    while (1)
        {
            if ( getLetter == winLetter )
            {
                printf("You won with %d attempts and the winning letter is %c", attempts, winLetter);
                break;
            }
            if ( attempts == 0 )
            {
                printf("You lost, it's %c", winLetter);
                break;
            }
            if (getLetter!=winLetter) {
            printf("[%d] Not '%c',\t", (  ), getLetter);
            scanf("\n%c", &getLetter);
            getLetter = toupper(getLetter);

            --attempts;
            }
    }
    return 0;
}
