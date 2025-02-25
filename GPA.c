#include <stdio.h>
float getGradepoint(char gradeLetter){
      switch(gradeLetter){
        case 'A':
        case 'a':
          return 4.0;
        case 'B':
        case 'b':
          return 3.0;
        case 'C':
        case 'c':
          return 2.0;
        case 'D':
        case 'd':
          return 1.0;
        case 'F':
        case 'f':
          return 0.0;
        default:
          return -1.8;
      }
}
int main() {
  int classNum;
  char letterGrade;
  double classCredit, totalGrades, totalCredits, result=0;
  printf("Enter number of classes: ");
  scanf("%d", &classNum);
      for (int i = 1;i<=classNum;++i) {
             printf("[%d] Credit: ",i);
             scanf("\n%lf",&classCredit);

             if (classCredit==0){
               printf("changed to 1.\n");
               classCredit=1;
             }

             printf("[%d] Letter Grade: ",i);
             scanf("\n%c",&letterGrade);

             totalGrades += classCredit*getGradepoint(letterGrade);
             totalCredits += classCredit;

             result = totalGrades/totalCredits;
        }
      printf("Number of classes: %d \nTotal grade points/Total credits: %.2lf / %.2lf \n\t→ %.2lf GPA", classNum, totalGrades, totalCredits, result);
 return 0;
}
