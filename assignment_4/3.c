/*WAP to accept a grade and declare the equivalent description :

Grade Description
E Excellent
V Very Good
G Good
A Average
F Fail */

#include <stdio.h>

int main () {
printf("Input the grade : ");
char grade;
scanf("%c", &grade);
if (grade == 'E') printf("You have chosen : Excellent.\n");
else if (grade == 'F') printf("You have chosen : Fail.\n");
else if (grade == 'V') printf("You have chosen : Very Good.\n");
else if (grade == 'G') printf("You have chosen : Good.\n");
else if (grade == 'A') printf("You have chosen : Average.\n");
else printf("The grade you entered has no description. \n");
return 0;
}
