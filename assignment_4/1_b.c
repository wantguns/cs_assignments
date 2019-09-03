/* WAP to check whether a character is an alphabet, digit. If it is an alphabet then check it is in
upper case or lower case. If it is in lower case then check it is vowel or consonant. If it is a digit
then check whether it is divisible by 2 and 5 or not. */
 #include <stdio.h>

int main() {
char c;
scanf("%c", &c);
if (c <= 'Z' && c >= 'A') printf ("This is an uppercase alphabet.\n");
if (c <='z' && c >= 'a') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u') 
        printf("This is a lowercase vowel.\n");
        else
        printf("This is a lowercase consonant");
}
if (c <= '9' && c >= '0')
        printf((c%5==0 && c%2==0)?"This digit is divisible by both 5 and 2\n":"This digit is not divisible by both 5 and 2.\n");

}


