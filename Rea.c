#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  char stringOne[] = "hello!";
  int stringLen = strlen(stringOne);
  char stringTwo[stringLen];

  printf("%s\n", stringOne);
  for ( int i = 0 ; i < stringLen;  ++i  ) {
    stringOne[i] = toupper(stringOne[i]);
    stringTwo[i] = stringOne[i];
    printf("'%c', ", stringTwo[i]);
  }

  return 0;
}
