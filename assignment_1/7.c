#include <stdio.h>

int main() {
  printf("Enter three numbers : ");
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("The relation d = %d", (a-b)/(b+c));
  return 0;
}
