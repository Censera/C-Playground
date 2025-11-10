#include <stdio.h>
#include <unistd.h>

int main(void)
{    
    unsigned int first = 0;
    unsigned int second = 1; 
    unsigned int following = 1;
    int count = 1;

    while (count <= 20)
    {
        following = first + second;

        printf("%u + %u = %u\r", first, second, following);
        fflush(stdout);

        first = second;
        second = following;

        count++;
        sleep(1);
    }

    return 0; // returns 0
}
