/* input all sides of a triangle and check whether triangle is valid or not. */

#include <stdio.h>

int main() {
float a, b, c;
printf("Enter the length of the sides of the triangle : ");
scanf("%d%d%d", &a, &b, &c);
printf((a+b>c && b+c>a && c+a>b)?"The Triangle is Valid\n":"The Triangle is invalid\n");
}
