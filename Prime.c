#include <stdio.h>

int main() {
    int number, result;
    number = 1;

    printf("2\t3\t"); //First to prime numbers.

    while ( number < 100 ) {
        
        //Every other prime number can be written in this form 6n + 1 or 6n.
        result = (6 * number) - 1;
        printf("%d\t", result);

        result = (6 * number) + 1;
        printf("%d\t", result);

        ++number;
    }

    return 0;
}
