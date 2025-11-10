#include <stdio.h>

int main(void)
{
  int num1;
  int num2;
  char operation;
  double result = 0;

  printf("Enter: number opration number (e.g: 2 + 3): ");

  scanf("%d %c %d", &num1, &operation, &numb2);

  printf("%d%c%d = ", num1, operation, numb2);
  
  switch (operation)
  {
      case '+': result = num1 + numb2;  break;
      case '-': result = num1 - numb2;  break;
      case '*': result = num1 * numb2;  break;
      case '/': if (numb2!=0)
      {
        result = (double)num1 / numb2;
      }
      else
      {
        printf("Dividing by Zero is undefined.");
        return -1;
      }
      break;
      
      default:
        printf("\"%c\" is an unsupported operation!\n", operation); 
        return -2;
  }
    printf("%g",result);

  return 0;
}
