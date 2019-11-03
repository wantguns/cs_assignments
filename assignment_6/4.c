/* WAP to print multiplication table as shown below for the numbers 1 to 5 using nested while and do-while
loops each separately.
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 12 14 16 18 20
3 6 9 12 15 18 21 24 27 30
4 8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50 */

#include <stdio.h>

int main() {
   int i = 1; 
   do {
        int j = 1;
        do {
            printf("%d\t", j*i);
            j++;
        } while(j <= 10);
        printf("\n");
        i++;
    } while(i <= 5);
}