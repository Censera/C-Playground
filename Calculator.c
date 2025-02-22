#include <stdio.h>
int main(){
  int firstNumber;
  int secondNumber;
  char operation;
  double result = 0;
  printf("First number \( + | - | * / \) Then second number : ");
  scanf("%d %c %d", &firstNumber, &operation, &secondNumber);
  printf("%d%c%d = ", firstNumber, operation, secondNumber);
  switch (operation) {
      case '+':
        result = firstNumber+secondNumber;
        break;
      case '-':
        result = firstNumber-secondNumber;
        break;
      case '/':
        if (secondNumber!=0){
        result = (double)firstNumber/secondNumber;
        }
        else { printf("Dividing by Zero is undefined.");
        }
        break;
        return 1;
      case '*':
        result = firstNumber*secondNumber;
        break;
      default:
        printf("Syntax error:'%c' is an unsupported operation!\n", operation);
        return 2;
  }
  printf("%g",result);
return 0;
}
