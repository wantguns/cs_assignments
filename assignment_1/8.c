#include <stdio.h>

int main() {
  printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nEnter your choice : ");
  int o;
  scanf("%d", &o);
  float c, f;
  switch (o) {
    case 1 :
      printf("Enter the Temperature in Fahrenheit : ");
      scanf("%f", &f);
      printf("The temperature in Celsius is : %f", ((f - 32)*5/9));
      break;
    case 2 :
      printf("Enter the Temperature in Celsius : ");
      scanf("%f", &c);
      printf("The temperature in Fahrenheit is : %f", ((c*9/5) + 32));
      break;
    default :
    printf("g*ndu samjha hai kya");
  }
  return 0;
}
