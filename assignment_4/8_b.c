#include <stdio.h>
int main() {
int a, b, c;
scanf("%d%d%d", &a, &b, &c);
printf((a+b>c && b+c>a && c+a>b)?"The Triangle is Valid\n":"The Triangle is invalid\n");
}
