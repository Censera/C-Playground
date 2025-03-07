#include <stdio.h>
#include <unistd.h>

int main () {
  int delyMicroSecond = 200000;
  int count = 60;
  char styleOne[] = "-\\|/";

  while ( count != 0 ) {
    int i = 0;

    for ( i = 0; i < 4; ++i) {
      printf("\033[31m[%c] Loading\r", styleOne[i]);
      usleep(delyMicroSecond);
      fflush(stdout);
    }

    --count;
  }
  return 0;
}
