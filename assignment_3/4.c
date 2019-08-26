#include <stdio.h>
int main() {
  printf("Enter three numbers : ");
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("Greatest number : %d\n", (a>b)?((a>c)?a:c):(b>c)?b:c);
  printf("Smallest number : %d", (a<b)?((a<c)?a:c):(b<c)?b:c);
}
