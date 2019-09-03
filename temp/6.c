#include<stdio.h>
int main() {
int reverseint=0,n,rem, check;
printf("Enter a three digit number : ");
scanf("%d",&n);
check = n;
while (n!= 0) {
 rem=n%10;
 reverseint=reverseint*10+rem;
 n=n/10;
}
if(reverseint==check) printf("%d is palindrome",check);
else printf("%d is not a palindrome", check);
return 0;
}
