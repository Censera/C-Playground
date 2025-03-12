#include <stdio.h>
#include <string.h>

int onInput (char ch) {
    switch (ch)
    {
    case 'C':
    case 'c':
        return 1;
        break;
    case 'R':
    case 'r':
        return 2;
        break;
    case 'D':
    case 'd':
        return 3;
        break;
    case 'W':
    case 'w':
        return 4;
        break;
    case 'q':
    return 5;
    break;

    default:
        return -1;
        break;
    }
}

typedef struct {
    char name[20];
    int value;
} account;


int main () {
    account add = {"user",0};
    char input;
    int ho;
    int created = 0;

    while ( input != 5 ) {
    printf("[C]reate, [R]emove, [D]epost, [W]ithdraw account:\n");
    scanf(" %c", &input);
    input = onInput(input);

    if ( input == 1 ) {
        printf("Name : ");
        scanf("%s", add.name);
        printf("Value : ");
        scanf(" %d", &add.value);
        printf("\t[%s] with %d$\n", add.name, add.value);

        created = 1;
    }
    if ( created == 1 ) {
        if ( input == 2) {
            memset(add.name, 0, sizeof(add.name));
            add.value = 0;
            created = 0;

            printf("Account removed successfully\n");
        }
        if ( input == 3 ) {
            scanf("%d", &ho);
            add.value += ho;
            printf("\t[%s] with %d$\n", add.name, add.value);
        }
        if ( input == 4 ) {
            scanf("%d", &ho);
            add.value -= ho;
            printf("\t[%s] with %d$\n", add.name, add.value);
        }
    } else if (created == 0)
    {
        printf("No account created yet\n");
    }
    }

    return 0;
}