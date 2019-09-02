/*WAP to find the largest among three numbers using (i) nested if statements, (ii) else if statements,
(iii) conditional operator*/
#include <stdio.h>

void elseif(int a, int b, int c) {
  if (a > b) {
    if (a > c) printf("Greatest number : %d", a);
    else printf("Greatest number : %d", c);
  }
  else if (b > c) printf("Greatest number : %d", b);
  else printf("Greatest number : %d", c);
}

void nesif(int a, int b, int c) {
  if (a > b) {
    if (a > c) printf("Greatest number : %d", a);
    if (a < c) printf("Greatest number : %d", c);
  }
  if (a < b && b > c) printf("Greatest number : %d", b);
  if (a < c && c > b) printf("Greatest number : %d", c);
}

void conditional(int a, int b, int c){
  printf("Greatest number : %d\n", (a>b)?((a>c)?a:c):(b>c)?b:c);
}

int main() {
  int a, b, c, choice;
  printf("Enter the three numbers : ");
  scanf("%d %d %d", &a, &b, &c);
  printf("Choose the method you would want to find the greatest number with : \n  1. Else If\n  2. Nested If\n  3. Conditional\n");
  scanf("%d", &choice);
  switch(choice) {
    case 1 : elseif(a, b, c);
             break;
    case 2 : nesif(a, b, c);
             break;
    case 3 : conditional(a, b, c);
             break;
  }
}
