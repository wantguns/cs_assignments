#include <stdio.h>

int main() {
    
    // using seive of erathosthenes
    int limit;
    printf("Enter the upper limit for which to check for primes : ");
    scanf("%d", &limit);
    int numbers[limit], primes[limit]; 

    //filling the numbers with natural numbers 
    for (int i = 0; i < limit; i++) {
        numbers[i] = i + 2;
    }

    //sorting primes
    for (int i = 0; i < limit; i++) {
        if (numbers[i] != -1) {
            for (int j = 2 * numbers[i] - 2; j < limit; j += numbers[i]) {
                numbers[j] = -1;
            }
        }
    }

    // making a different array for primes 
    int check = 0;
    for (int i = 0; i < limit; i++) {
        if (numbers[i] != -1) {
            primes[check] = numbers[i];
            check++;
        }
    }

    //printing the primes 
    printf("Printing the primes : \n");
    for (int i = 0; i < check; i++) {
        printf("%d\n", primes[i]);
    }
}