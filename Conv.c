#include <stdio.h>

int main(){
char choice;
double number, result = 0;
printf("[l] is for Kilometers to Miles, [t] is for °C to °F [q] for exit:\n");
scanf("%c", &choice);
switch(choice){
    case 'l':
      printf("Kilometers to miles:\n \t- ");
      scanf("%lf",&number);
      result = number/1.609344;
      printf("= %.2lf Miles.",result);
      break;
    case 't':
      printf("°C to °F: \n \t- ");
      scanf("%lf",&number);
      result = (number*(9/5))+32;
      printf("= %.2lf °F.",result);
      break;
    case 'q':
      printf("quitting...\n");
      break;
    default:
      printf("Invalid choice!");
      break;
  }
  return 0;
}
