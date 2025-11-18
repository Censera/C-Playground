#include <stdio.h>
#include <ctype.h>

float toPoints(char gradeLetter)
{
      switch(tolower(gradeLetter))
      {
        case 'a':
          return 4.0;
        case 'b':
          return 3.0;
        case 'c':
          return 2.0;
        case 'd':
          return 1.0;
        case 'f':
          return 0.0;
        default:
          return -1.0;
      }
}
int main(void)
{
  int number_of_classes = 0;
  char grade;
  double class_credit = 0;
  double total_grades = 0;
  double total_credits = 0;
  double result = 0;
  int i; 

  printf("Enter number of classes: ");
  scanf("%d", &number_of_classes);

  i = 0;
  while (i < number_of_classes)
  {
    printf("Class number [%d] credit: ", i);
    scanf(" %lf", &class_credit);

    if (class_credit == 0)
    {
      printf("Credit number can't be 0, changing it to 1.\n");
      class_credit = 1;
    }

    printf("Class number [%d] grade (e.g: C): ", i);
    scanf(" %c", &grade);

    total_grades += class_credit * toPoints(grade);
    total_credits += class_credit;

    i++;
    }
    
    result = total_grades / total_credits;

    printf("Number of classes: %d \nTotal grade "
      "points/Total credits: %.2lf / %.2lf \n\t→ %.2lf GPA",
      number_of_classes, total_grades, total_credits, result);
 return 0;
}
