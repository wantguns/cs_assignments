#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Enter a three digit number : ");
  scanf("%d", &a);
  b = a%10;
  a /= 10;
  c = a%10;
  a /= 10;
  d = a%10;
  printf("Sum of the digits : %d\n", b+c+d);
  printf("Products of the digits : %d", b*c*d);
  return 0;
}
