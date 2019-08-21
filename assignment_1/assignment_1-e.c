#include <stdio.h>

int main(){
int a, b;
printf("Enter two integers : ");
scanf("%d %d", &a, &b);
printf("Sum : %d",a+b);
printf("Difference : %d", a-b);
printf("Product : %d",a*b);
printf("Division : %d", a/b);

float d, c;
printf("Enter two floating numbers : ");
scanf("%f %f", &c, &d);
printf("Sum : %f",c+d);
printf("Difference : %f", c-d);
printf("Product : %f",c*d);
printf("Division : %f", c/d);
return 0;
}
