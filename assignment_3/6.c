#include <stdio.h>
int main() {
  printf("Enter the number : ");
  float num, div = 10;
  scanf("%f", &num);
  //again it is given that the num is a 3 digit one, thus taking its benefit
  do {
    printf("%d\n", (int)num%(int)div);
    div *= 10;
  } while (div != 10000);
}
