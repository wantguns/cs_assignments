/* Q1. WAP to find the sum of the following series from 1 to n using user-defined function.
1!/1 + 2!/2 + 3!/3 + ..... + n!/n. For example, 1!/1+2!/2+3!/3+4!/4+5!/5 = 1+1+2+6+24=34.
[Hint: use a separate function to compute the factorial of the corresponding number.] */

int factorial(int n) {
    int a = 1, ret = 1, ret2 = 1;
    while(a<n) {
        ret *= a;
        ret2 += ret;
        a++;
    }
    return ret2;
}

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The required number is : %d ", factorial(n));
    return 0;
}