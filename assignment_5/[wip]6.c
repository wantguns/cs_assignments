//WIP

/* WAP that accepts a decimal number and find its binary, octal and hexadecimal equivalent and vice
versa. */

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d ", &num);
    //printf("Binary equivalent of %d =  ")
    printf("Octal equivalent of %d : %o\n", num, num);
    printf("Hexadecimal equivalent of %d : %X\n", num, num);
}
