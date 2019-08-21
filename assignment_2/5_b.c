#include <stdio.h>
int main(){
  int a, b;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  a = a+b;
  b = a-b; //b = (a+b)-b = a now
  a = a-b; //a = (a+b)-a = b now
  printf("The first number swapped : %d\n", a);
  printf("The second number swapped : %d", b);
  return 0;
}
