#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char guess;
    int alphabet_len = strlen(alphabet);
    char winning_letter = alphabet[rand() % alphabet_len];
    int attempts = alphabet_len; //26
    srand(time(NULL));

    printf("- Guess a letter : ", winning_letter);
    scanf("%c", &guess);
    guess = toupper(guess);

    while (1)
        {
            printf("[%d] Not '%c',\t", attempts, guess);
            scanf("\n%c", &guess);
            guess = toupper(guess);
            
            if ( guess == winning_letter )
            {
                printf("You won with %d attempts, and the winning letter is %c", attempts, winning_letter);
                break;
            }

            attempts--;
            
            if ( 0 == attempts )
            {
                printf("You lost, it's %c", winning_letter);
                break;
            }
        }
    return 0;
}
