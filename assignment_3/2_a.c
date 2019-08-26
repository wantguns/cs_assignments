#include <stdio.h>
#include <math.h>
int main() {
  long long int num, check, sum = 0, numb, count = 0;
  printf("Enter the number : ");
  scanf("%lld", &num);
  check = num;
  numb = num;
  do {
    check /= 10;
    count++;
  } while(check != 0);
  do {
    sum += pow((numb%10), count);
    numb /= 10;
  } while (numb != 0);
  printf("%s", (sum == num)? "Yes": "No");
}
