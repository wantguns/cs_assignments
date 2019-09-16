
/* WAP that accepts a decimal number and find its binary, octal and hexadecimal equivalent and vice
versa. */
#include <math.h>
#include <stdio.h>

int binary(int num) {
    int binary = 0, i = 0;
    while(num) {
        binary += (num%2)*pow(10, i);
        i++;
        num /= 2;
    }
    return binary;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Binary equivalent of %d : %d\n", num, binary(num));
    printf("Octal equivalent of %d : %o\n", num, num);
    printf("Hexadecimal equivalent of %d : %X\n", num, num);
}
