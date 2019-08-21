#include <stdio.h>
int main() {
  float a, b;
  int c;
  printf("Enter the two floating numbers : ");
  scanf("%f%f", &a, &b);
  c = a+b;
  printf("The three numbers are : %f, %f, %d", a, b, c);
  return 0;
}
