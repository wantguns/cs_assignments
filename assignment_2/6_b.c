/*Extend the above program for three variables a, b, and c such that a holds the value of c, b holds
the value of a, and c holds the value of b using and without using a third variable.*/

#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  printf("Enter the third number : ");
  scanf("%d", &c);
  a = a+c;
  b = b+c;
  c = b-c; //c = b
  b = a-b+c; //b = a
  a = a-b; //a = c
  printf("The first number swapped with third: %d\n", a);
  printf("The second number swapped with first : %d\n", b);
  printf("The third number swapped with second : %d", c);
  return 0;
}
