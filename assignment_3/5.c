#include <stdio.h>
int main () {
  printf("Enter the number : ");
  int num, revnum = 0, mult = 100;
  scanf("%d", &num);
//it is given that the number is a 3 digit one. so it saves us from one loop.
  do {
    revnum += (num%10)*mult;
    num /= 10;
    mult /= 10;
  } while (num != 0);
  printf("The number reversed is %d.", revnum);
}
