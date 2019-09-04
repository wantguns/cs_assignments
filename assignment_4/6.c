/* WAP a read a three digits number from the keyboard and check whether it is a palindrome or not. */

#include <stdio.h>

int main() {
int reverseint=0, n, rem, check;
printf("Enter a number : ");
scanf("%d", &n);
check = n;
while (n!= 0) {
 rem = n%10;
 reverseint = reverseint*10 + rem;
 n /= 10;
}
if(reverseint==check) printf("%d is palindrome.\n", check);
else printf("%d is not a palindrome.\n", check);
return 0;
}
