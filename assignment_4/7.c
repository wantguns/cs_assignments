/* WAP to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>

int main() {
  float salary;
  printf("Enter your basic salary : ");
  scanf("%f", &salary);
  if (salary <= 10000) printf("Gross Salary : %f\n", salary);
  if (salary > 10000 && salary <= 20000) printf("Gross Salary : %f\n", salary*1.05);
  if (salary > 20000) printf("Gross Salary : %f\n", salary*1.25);
}
