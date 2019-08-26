#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
  float angle;
  printf("Enter the angle in degrees : ");
  scanf("%f", &angle);
  printf("sin(%0.2f) = %0.2f\n", angle, sin(angle*PI/180));
  printf("cos(%0.2f) = %0.2f\n", angle, cos(angle*PI/180));
}
