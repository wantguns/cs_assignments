#include <stdio.h>

int main(){
int a, b;
printf("Enter two integers : ");
scanf("%d %d", &a, &b);
printf("Sum : %d\n",a+b);
printf("Difference : %d\n", a-b);
printf("Product : %d\n",a*b);
printf("Division : %d\n", a/b);

float d, c;
printf("Enter two floating numbers : ");
scanf("%f %f", &c, &d);
printf("Sum : %f\n",c+d);
printf("Difference : %f\n", c-d);
printf("Product : %f\n",c*d);
printf("Division : %f\n", c/d);
return 0;
}
