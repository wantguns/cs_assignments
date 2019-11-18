#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime (int num) {
    int i = num, count = 0;
    while (i) {
        if (num % i == 0)
            count++;
        i--;
    }
    return ((count <= 2) ? true : false);
}

bool isArmstrong (int num) {
  int check, sum = 0, numb, count = 0;
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
  return ((sum == num)? true: false);
}

bool isPerfect (int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) 
            sum += i;
    }
    return ((sum == num) ? true : false); 
}

int main () {
    int num;
    printf("Enter the number to check : ");
    scanf("%d", &num);
    printf((isPrime(num) ? "%d is a prime number.\n" : "%d is not a prime number.\n"), num);
    printf((isPerfect(num) ? "%d is a perfect number.\n" : "%d is not a perfect number.\n"), num);
    printf((isArmstrong(num) ? "%d is a armstrong number.\n" : "%d is not a armstrong number.\n"), num);
}
