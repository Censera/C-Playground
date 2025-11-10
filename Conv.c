#include <stdio.h>

int main ()
{
    char choice;
    double number;
    double result = 0;
    
    printf("[l] is for Kilometers to Miles, [t] is for °C to °F [q] for exit:\n");
    
    scanf("%c", &choice);

    while (1)
    {
      if (choice == 'q')
      {
          printf("Quitting...\n");
          return 0;
      }
    }

    switch (choice)
    {
      case 'l':
          printf("Kilometers to miles:\n");
          scanf("%lf", &number);

          result = number / 1.609344;
        
          printf("= %.2lf Miles.", result);
          break;
      
      case 't':
          printf("°C to °F:\n");
          scanf("%lf", &number);
        
          result = (number * (9.0 / 5)) + 32;
        
          printf("= %.2lf °F.", result);
          break;

      default:
          printf("Invalid choice!\n");
          break;
    }
    return 0;
}
