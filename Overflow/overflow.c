#include <stdio.h>

int main(void)
{
  unsigned char  c; // 1 byte
  short   a; // 2 bytes

  c = 0b11111111; // 255
  
  a = 0b11111111; // 255

  printf("1 byte:\nc = %d\n", c);
  
  // add 1 to c
  c++;
  printf("c + 1 = %d\n", c);

  printf("\n2 bytes:\na = %d\n", a);
  
  // add 1 to a  
  a++;
  printf("a + 1 = %d\n", a);

  return 0;
}
