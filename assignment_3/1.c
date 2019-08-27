#include <stdio.h>
int main() {
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("%d\n%d\n%d\n", num%1000, num%100, num%10);
}
