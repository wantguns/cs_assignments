/* input angles of a triangle and check whether triangle is valid or not. */
#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter the values of angles of the triangle in degrees : ");
  scanf("%f%f%f", &a, &b, &c);
  printf((a+b+c==180)?"The triangle is valid\n":"The triangle is invalid\n");
}
