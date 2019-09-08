/* WAP that accepts a character from the keyboard and present the corresponding month(s) using
Switch statement. */

#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter : ");
    scanf("%c", &letter);

    switch(letter) {
        case 'j' :
        case 'J' : printf("January, June and July"); break;
        case 'f' :
        case 'F' : printf("February"); break;
        case 'm' :
        case 'M' : printf("March and May"); break;
        case 'a' :
        case 'A' : printf("April and August"); break;
        case 's' :
        case 'S' : printf("September"); break;
        case 'o' :
        case 'O' : printf("October"); break;
        case 'n' :
        case 'N' : printf("November"); break;
        case 'd' :
        case 'D' : printf("December"); break;
        default : printf("No month starts with that letter."); break;
    }
    printf("\n");
}
