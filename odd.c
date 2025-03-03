#include <stdio.h>

int main() {
    int number = 0;
    int remain;

    while ( number < 100 ) {
      remain = number % 2;
        
      if ( remain != 0 ) {
        printf("%d\t", number);
      }

      ++number;
    }

    return 0;
}
