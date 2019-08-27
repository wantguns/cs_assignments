#include <stdio.h>
#include <math.h>
int main() {
  printf("Enter the number : ");
  int num, numsq;
  scanf("%d", &num);
  numsq = pow(num, 2);
  printf("%s", (numsq%1000 == num) ? "Yes" : "No");
}
