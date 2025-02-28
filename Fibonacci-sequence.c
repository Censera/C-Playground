#include <stdio.h>
#include <unistd.h>

int main() {    
    unsigned short int first, second, following, count;
    first = 0;
    second = count = 1;
    following = second;

    while(count<=20) {
        printf("%hu + %hu",first, second);
        printf(" = %hu\r",following);

        first = second;
        second = following;
        following = first + second;
        fflush(stdout);
        sleep(1);

        ++count;
    }

      return 0; //returns 0
}
