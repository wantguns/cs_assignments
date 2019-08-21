#include <stdio.h>
int main() {
  int a = sizeof(a);
  float b = sizeof(b);
  char c = sizeof(c);
  double d = sizeof(d);
  printf("The size of int data type is %d bits.\n", a);
  printf("The size of float data type is %f bits.\n", b);
  printf("The size of char data type is %d bits.\n", c);
  printf("The size of double data type is %lf bits.\n", d);
}
