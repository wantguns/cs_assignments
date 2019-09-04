/* whether the triangle is equilateral, isosceles or scalene triangle. */

#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter the length of the sides of the triangle : ");
  scanf("%f%f%f", &a, &b, &c);
  if (a==b && b==c) printf("The triangle is equilateral.\n");
  else if(a==b || b==c || c==b) printf("The triangle is isoceles.\n");
  else printf("The triangle is scalene.\n");
}
