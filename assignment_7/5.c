/* WAP using user-defined function to find all strong numbers between 1 to n. Use a separate function to
compute the factorial of the corresponding number.
[Hint: A number in which the sum of factorial of individual digits is equal to the number is called strong number.
For example, 145 is a strong number because 145= 1! + 4! + 5!
Example: Input
Input lower limit: 1
Input upper limit: 1000
Output
Strong numbers between 1 and 1000: 1, 2, 145] */

#include <stdio.h>
#include <stdbool.h>

#define lli long long int

lli factorial(lli dig) {
    if (dig > 1) return factorial(dig-1) * dig;
    else return 1; 
}

bool checkStrong(lli num) {
    lli sum = 0, check = num;
    while (num) {
        sum += factorial(num % 10);
        num /= 10;
    }
    if (sum == check) return true;
    return false;
}

int main() {
    lli lowerLim, upperLim;
    printf("Enter the lower limit of the range : ");
    scanf("%lld", &lowerLim);
    printf("Enter the upper limit of the range : ");
    scanf("%lld", &upperLim);
    printf("The strong numbers between %lld and %lld are :\n", lowerLim, upperLim);
    for (lli i = lowerLim; i <= upperLim; i++) {
        if (checkStrong(i)) {
            printf("%lld\n", i);
        }
    }
}