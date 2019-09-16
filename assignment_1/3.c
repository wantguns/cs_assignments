/* WAP which will accept an integer, a decimal number, a character and a string from the keyboard
and display them one per line. */
#include <stdio.h>

int main() {
    int integer, decimal;
    char character, string[50];
    printf("Enter an Integer : ");
    scanf("%d", &integer);
    printf("Enter a Decimal : ");
    scanf("%d", &decimal);
    printf("Enter a Character : ");
    scanf(" %c", &character);       //here the space is intentionally left before %c
    printf("Enter a String : ");
    scanf("%s", &string);
    printf("You entered : \n Integer : %d\n Decimal : %d\n Character : %c\n String : %s", integer, decimal, character, string);
}
