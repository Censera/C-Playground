#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int Number=100;
  int guess=0;
  int attempts = 0;
  srand(time(NULL));
  int value= rand()%(Number+1);
  printf("guess a number between 1~100:\n");
  while (guess!=value){
   scanf("%d", &guess);
     ++attempts;
    if (guess>value){
    printf("smaller than [%d] [Attempt %d] :\n",guess,attempts);
  } else if (guess<value){
    printf("bigger than [%d] [Attempt %d] :\n",guess,attempts);
  }}
  printf("You won! it is %d with %d attempt(s).",value, attempts);
  return 0;
}
