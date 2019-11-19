
## Assignment 1

### Question 1
```c
#include <stdio.h>
#include <math.h>
int main() {
  printf("Enter the three sides of the triangle : ");
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  printf("The area of the triangle is %f square units.", sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b-a+c)/16));
  return 0;
}

```

### Question 2
```c
#include <stdio.h>
#include <math.h>
int main() {
int p, r, t, n;
int si, ci;
printf("Enter principle, rate of interest and time, number of times the interest is compounded : ");
scanf("%d %d %d %d", &p, &r, &t, &n);
si = (p*r*t)/100;
printf ("The Simple Interest is : %d", si);
ci = pow((p*(1 + (r/n))),(n*t));
printf ("The Amount after compound interest is : %d", ci);
return 0;
}

```

### Question 3
```c
#include <stdio.h>
#define PI 3.14159
int main() {
  //it is already understood that the length of the diameter is 5 units
  printf("The area of the circle is %f units.\nThe perimeter of the circle is %f units. ", PI*25, PI*10);
  return 0;
}

```

### Question 4
```c
#include <stdio.h>

void main(){
for (int i = 0; i < 5; i++)
printf("Sea C is Sea\n");
}

```

### Question 5
```c
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
    printf("Wrong choice printed");
  }
  return 0;
}

```

### Question 6
```c
/* WAP which will accept an integer, a decimal number, a character and a string from the keyboard
and display them one per line. */
#include <stdio.h>

int main() {
    int integer, decimal;
    char character, string[50];
    printf("Enter an Integer : ");
    scanf("%d", &integer);
    printf("Enter a Decimal : ");
    scanf("%d", &decimal);
    printf("Enter a Character : ");
    scanf(" %c", &character);       //here the space is intentionally left before %c
    printf("Enter a String : ");
    scanf("%s", &string);
    printf("You entered : \n Integer : %d\n Decimal : %d\n Character : %c\n String : %s", integer, decimal, character, string);
}

```

### Question 7
```c
#include <stdio.h>

int main() {
  printf("Enter three numbers : ");
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("The relation d = %d", (a-b)/(b+c));
  return 0;
}

```

### Question 8
```c
#include <stdio.h>

void main(){
printf("First line\t:\tRZ-44\nSecond line\t:\tPalam Vihar\nThird line\t:\tNew Delhi\nFourth line\t:\tDelhi, 110075\n");
}

```

### Question 9
```c
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

```

### Question 10
```c
#include <stdio.h>

void main(){
printf("1st line \n 2nd line \t tabbed text \b break\n");
}

```

## Assignment 2

### Question 1
```c
#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;
  printf("The first number swapped : %d\n", a);
  printf("The second number swapped : %d", b);  
  return 0;
}

```

### Question 2
```c
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

```

### Question 3
```c
#include <stdio.h>
int main() {
  printf("\t\t\t****LIST OF ITEMS****\t\n");
  printf("Item\t\t\tPrice(Rs.)\tTotal(Rs.)\n");
  printf("________________________________________________\n");
  printf("Pen\t\t\t10\t20\n");
  printf("Pencil\t\t\t5\t15\n");
  printf("Pen\t\t\t2\tt2\n");
  printf("________________________________________________\n");
  printf("Grand Total(Rs.)\t17\t37\n");
  return 0;
}

```

### Question 4
```c
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

```

### Question 5
```c
#include <stdio.h>
int main() {
  printf("$\t\n");
  printf("$\t$\t\n");
  printf("$\t$\t$\n");
  printf("$\t$\t$\n");
  printf("$\t$\t$");
  return 0;
}

```

### Question 6
```c
/*Extend the above program for three variables a, b, and c such that a holds the value of c, b holds
the value of a, and c holds the value of b using and without using a third variable.*/

#include <stdio.h>
int main(){
  int a, b, c, d;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  printf("Enter the third number : ");
  scanf("%d", &c);
  d = a;
  a = c;
  c = b;
  b = d;
  printf("The first number swapped with third: %d\n", a);
  printf("The second number swapped with first : %d\n", b);
  printf("The third number swapped with second : %d", c);
  return 0;
}

```

### Question 7
```c
/*Extend the above program for three variables a, b, and c such that a holds the value of c, b holds
the value of a, and c holds the value of b using and without using a third variable.*/

#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  printf("Enter the third number : ");
  scanf("%d", &c);
  a = a+c;
  b = b+c;
  c = b-c; //c = b
  b = a-b+c; //b = a
  a = a-b; //a = c
  printf("The first number swapped with third: %d\n", a);
  printf("The second number swapped with first : %d\n", b);
  printf("The third number swapped with second : %d", c);
  return 0;
}

```

### Question 8
```c
#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Enter a three digit number : ");
  scanf("%d", &a);
  b = a%10;
  a /= 10;
  c = a%10;
  a /= 10;
  d = a%10;
  printf("Sum of the digits : %d\n", b+c+d);
  printf("Products of the digits : %d", b*c*d);
  return 0;
}

```

### Question 9
```c
#include <stdio.h>
int main() {
  float a, b;
  int c;
  printf("Enter the two floating numbers : ");
  scanf("%f%f", &a, &b);
  c = a+b;
  printf("The three numbers are : %f, %f, %d", a, b, c);
  return 0;
}

```

### Question 10
```c
#include <stdio.h>

int main() {
    printf("The gross salary is %f", (50000*(1.8)));
}

```

## Assignment 3

### Question 1
```c
#include <stdio.h>
#include <math.h>
int main() {
  long long int num, check, sum = 0, numb, count = 0;
  printf("Enter the number : ");
  scanf("%lld", &num);
  check = num;
  numb = num;
  do {
    check /= 10;
    count++;
  } while(check != 0);
  do {
    sum += pow((numb%10), count);
    numb /= 10;
  } while (numb != 0);
  printf("%s", (sum == num)? "Yes": "No");
}

```

### Question 2
```c
#include <stdio.h>
int main() {
  printf("Enter the number : ");
  float num, div = 10;
  scanf("%f", &num);
  //again it is given that the num is a 3 digit one, thus taking its benefit
  do {
    printf("%d\n", (int)num%(int)div);
    div *= 10;
  } while (div != 10000);
}

```

### Question 3
```c
#include <stdio.h>
#include <math.h>
int main() {
  printf("Enter the number : ");
  int num, numsq;
  scanf("%d", &num);
  numsq = pow(num, 2);
  printf("%s", (numsq%1000 == num) ? "Yes" : "No");
}

```

### Question 4
```c
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
  float angle;
  printf("Enter the angle in degrees : ");
  scanf("%f", &angle);
  printf("sin(%0.2f) = %0.2f\n", angle, sin(angle*PI/180));
  printf("cos(%0.2f) = %0.2f\n", angle, cos(angle*PI/180));
}

```

### Question 5
```c
#include <stdio.h>
int main() {
  printf("Enter three numbers : ");
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("Greatest number : %d\n", (a>b)?((a>c)?a:c):(b>c)?b:c);
  printf("Smallest number : %d", (a<b)?((a<c)?a:c):(b<c)?b:c);
}

```

### Question 6
```c
#include <stdio.h>
int main () {
  printf("Enter the number : ");
  int num, revnum = 0, mult = 100;
  scanf("%d", &num);
//it is given that the number is a 3 digit one. so it saves us from one loop.
  do {
    revnum += (num%10)*mult;
    num /= 10;
    mult /= 10;
  } while (num != 0);
  printf("The number reversed is %d.", revnum);
}

```

### Question 7
```c
#include <stdio.h>
int main() {
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("%d\n%d\n%d\n", num%1000, num%100, num%10);
}

```

## Assignment 4

### Question 1
```c
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
  if (b > a) {
    if (b > c) printf("Greatest number : %d", b);
    if (b < c) printf("Greatest number : %d", c);
  }
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

```

### Question 2
```c
/* whether the triangle is equilateral, isosceles or scalene triangle. */

#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter the length of the sides of the triangle : ");
  scanf("%f%f%f", &a, &b, &c);
  if (a==b && b==c) printf("The triangle is equilateral.\n");
  else if(a==b || b==c || c==b) printf("The triangle is isoceles.\n");
  else printf("The triangle is scalene.\n");
}

```

### Question 3
```c
/* WAP a read a three digits number from the keyboard and check whether it is a palindrome or not. */

#include <stdio.h>

int main() {
int reverseint=0, n, rem, check;
printf("Enter a number : ");
scanf("%d", &n);
check = n;
while (n!= 0) {
 rem = n%10;
 reverseint = reverseint*10 + rem;
 n /= 10;
}
if(reverseint==check) printf("%d is palindrome.\n", check);
else printf("%d is not a palindrome.\n", check);
return 0;
}

```

### Question 4
```c
/*WAP to calculate and print the Electricity bill of a given customer. The customer id., name and unit
consumed by the user should be taken from the keyboard and display the total amount to pay by the
customer.

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of
Rs. 100/-. */

#include <stdio.h>
int main() {
float custid, unit, rate, bill, surcharge;
char name[20];
scanf("%f %s %f", &custid, &name, &unit);
printf("Customer IDNO : %0.0f\n", custid);
printf("Customer Name : %s\n", name);
printf("Units consumed : %0.0f\n", unit);
if (unit < 200) rate = 1.2;
if (unit >= 200 && unit < 400) rate = 1.5;
if (unit >= 400 && unit < 600) rate = 1.8;
if (unit >= 600) rate = 2;
bill = rate * unit;
if (bill <= 100) {
        printf("Your bill has exceeded the minimum amount.\n");
        return 0;
}
printf("Amount charges at Rs. %0.2f per unit : %0.2f\n", unit, bill);
if (bill >= 400) {
        printf("Surcharge amount : %f\n", 0.15*bill);
        bill *= 1.15;
        printf("Net amount to be paid by the customer : %0.2f\n", bill);
return 0;
}
}




```

### Question 5
```c
/* input angles of a triangle and check whether triangle is valid or not. */
#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter the values of angles of the triangle in degrees : ");
  scanf("%f%f%f", &a, &b, &c);
  printf((a+b+c==180)?"The triangle is valid\n":"The triangle is invalid\n");
}

```

### Question 6
```c
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



```

### Question 7
```c
/*WAP to accept a grade and declare the equivalent description :

Grade Description
E Excellent
V Very Good
G Good
A Average
F Fail */

#include <stdio.h>

int main () {
printf("Input the grade : ");
char grade;
scanf("%c", &grade);
if (grade == 'E') printf("You have chosen : Excellent.\n");
else if (grade == 'F') printf("You have chosen : Fail.\n");
else if (grade == 'V') printf("You have chosen : Very Good.\n");
else if (grade == 'G') printf("You have chosen : Good.\n");
else if (grade == 'A') printf("You have chosen : Average.\n");
else printf("The grade you entered has no description. \n");
return 0;
}

```

### Question 8
```c
/* input all sides of a triangle and check whether triangle is valid or not. */

#include <stdio.h>

int main() {
float a, b, c;
printf("Enter the length of the sides of the triangle : ");
scanf("%f%f%f", &a, &b, &c);
printf((a+b>c && b+c>a && c+a>b)?"The Triangle is Valid\n":"The Triangle is invalid\n");
}

```

### Question 9
```c
/* WAP to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>

int main() {
  float salary;
  printf("Enter your basic salary : ");
  scanf("%f", &salary);
  if (salary <= 10000) printf("Gross Salary : %f\n", salary);
  if (salary > 10000 && salary <= 20000) printf("Gross Salary : %f\n", salary*1.05);
  if (salary > 20000) printf("Gross Salary : %f\n", salary*1.25);
}

```

### Question 10
```c
/* WAP to read temperature in centigrade and display a suitable message according to temperature as
mentioned below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal temperature
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>
int main()
{
int t;
printf("Enter the temperature : ");
scanf("%d",&t);
if(t<0) printf("freezing weather\n");
else if(t>=0 && t<10) printf("Very Cold weather\n");
else if(t>=10 && t<20) printf("Cold Weather\n");
else if(t>=20 && t<30) printf("Normal temperature\n");
else if(t>=30 && t<40) printf("It's Hot\n");
else if(t>=40) printf("It's very Hot\n");
return 0;
}

```

### Question 11
```c
/* WAP to find the eligibility of admission of a student for a professional institute based on the
following criteria:
Marks in Mathematics >=65,
Marks in Physics >=55,
Marks in Chemistry >=60,
Total in all three subjects >=190 or Total in Mathematics and Chemistry >=130 */

#include <stdio.h>
int main() {
int math, phy, chem, total, tot;
printf("Enter the marks obtained in Maths, Physics, Chemistry : ");
scanf("%d%d%d",&math,&phy,&chem);
total=math+phy+chem;
tot=math+chem;
if((math>=65 && phy>=55 && chem>=60 && total>=190) || tot>=130)
	printf("The candidate is eligible for admission.\n");
else
	printf("The candidate is not eligible for admission.\n");
return 0;
}

```

## Assignment 5

### Question 1
```c
/* print floyd's triangle */
#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);

    int k = 1;
    for(int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}

```

### Question 2
```c

/* WAP that accepts a decimal number and find its binary, octal and hexadecimal equivalent and vice
versa. */
#include <math.h>
#include <stdio.h>

int binary(int num) {
    int binary = 0, i = 0;
    while(num) {
        binary += (num%2)*pow(10, i);
        i++;
        num /= 2;
    }
    return binary;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Binary equivalent of %d : %d\n", num, binary(num));
    printf("Octal equivalent of %d : %o\n", num, num);
    printf("Hexadecimal equivalent of %d : %X\n", num, num);
}

```

### Question 3
```c
/* WAP that accepts the marks of a student between 0 and 100 and print the grades as per the conditions
mentioned below using Switch statement.
90<= mark<=100: A grade
60<= mark<90: B grade
50<= mark<60: C grade
30<= mark<50: D grade
0<= mark<30: Fail */

#include <stdio.h>

int main () {
    int marks;
    printf("Enter the marks of the student : ");
    scanf("%d", &marks);

    switch (marks) {
        case 0 ... 29 : printf("Fail"); break;
        case 30 ... 49 : printf("D grade"); break;
        case 50 ... 59 : printf("C grade"); break;
        case 60 ... 89 : printf("B grade"); break;
        case 90 ... 100 : printf("A grade"); break;
        default : printf("Invalid Marks");
    }
    printf("\n");
}

```

### Question 4
```c
/* make this triangle
      1
    2 3 2
  3 4 5 4 3 */

#include <stdio.h>

int main() {
    int height, spaces, step, num;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);

    for (step = 0; step < height; step++) {
        for (spaces = 0; spaces < height-step-1; spaces++)
            printf("  ");
        for (num = step+1; num < (step+1)*2; num++)
            printf("%d ", num);
        for (num = step*2; num > step ; num--)
            printf("%d ", num);
        printf("\n");
    }
}

```

### Question 5
```c
/* WAP to print pascals triangle */

#include <stdio.h>

int combination(int c, int num) {
        if ( c == 0 || num == 0) return 1;
        else {
                int nume = 1, denom = 1, diff;
                diff = c - num;
                while(c) {
                        nume *= c;
                        c--;
                }

                while(num) {
                        denom *= num;
                        num--;
                }

                if(diff != 0) {
                        while (diff) {
                                denom *= diff;
                                diff--;
                        }
                }

                return (nume/denom);
        }
}

int main() {
        printf("Enter the height of the triangle : ");
        int height;
        scanf("%d", &height);

        for(int i = 0; i < height; i++) {
                for (int j = 0; j < height - i - 1; j++) printf(" ");
                for (int j = 0; j <= i; j++) {
                        printf("%d ", combination(i, j));
                }
                printf("\n");
        }
        return 0;
}

```

### Question 6
```c
/* WAP to read the marks of 10 students and count the number of students marks lie between 45 and 65
using for and continue statements. The entered marks should be between 0 and 100 else the loop will
terminate and it simply displays: ‘A wrong mark has been entered’. */

#include <stdio.h>
int main() {
    int count = 0, num, marks;
    printf("Enter the number of students you want to enter the marks for : ");
    scanf("%d", &num);
    printf("Enter the marks for %d student(s) : ", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &marks);
        if (marks >= 45 && marks <= 65)
            count++;
        else if(marks <= -1 || marks >= 100) {
            printf("A wrong mark has been entered");
            return 0;
        }
    }
    printf("%d student(s) scored marks between 45 and 65.\n", count);
    return 0;
}

```

### Question 7
```c
/* WAP that accepts a character from the keyboard and present the corresponding month(s) using
Switch statement. */

#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter : ");
    scanf("%c", &letter);

    switch(letter) {
        case 'j' :
        case 'J' : printf("January, June and July"); break;
        case 'f' :
        case 'F' : printf("February"); break;
        case 'm' :
        case 'M' : printf("March and May"); break;
        case 'a' :
        case 'A' : printf("April and August"); break;
        case 's' :
        case 'S' : printf("September"); break;
        case 'o' :
        case 'O' : printf("October"); break;
        case 'n' :
        case 'N' : printf("November"); break;
        case 'd' :
        case 'D' : printf("December"); break;
        default : printf("No month starts with that letter."); break;
    }
    printf("\n");
}

```

### Question 8
```c
/* Q7. WAP that reads 10 different numbers and compute the sum of all odd and even numbers separately.
Use for loop, while loop and do-while loop each separately for this program. */
#include <stdio.h>
int main() {
    int o_count = 0, e_count = 0, x, num;
    printf("Enter the number of numbers you want to input : ");
    scanf("%d", &x);
    printf("Enter the %d number(s) : ", x);
    for(int i = 0; i < x; i++) {
        scanf("%d", &num);
        if(num%2 == 0) e_count += num;
        else o_count += num;
    }
    printf("Sum of even numbers entered : %d\n", e_count);
    printf("Sum of odd numbers entered : %d\n", o_count);
}

```

### Question 9
```c
/* WAP to print and count all those integers that are not divisible by either 2 or 3 and lie between 1 and
200. Use goto statement instead of using any loops. */
#include <stdio.h>

int main() {
    int num = 0;
    check : {
        if(num%2 ==0 || num%3==0)
        goto print;
        else
        goto next;
    }
    print : {
        printf("%d \n", num);
        if(num >= 200) return 0;
        num++;
        goto check;
    }
    next : {
        if(num >= 200) return 0;
        num++;
        goto check;
    }
}

```

### Question 10
```c
/* WAP to accept a number and print all its digits in words using Switch statement. */
#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number : ");
    scanf("%d", &num);

    //reversing
    int revnum = 0;
    while (num) {
        revnum = revnum * 10 + num % 10;
        num /= 10;
    }

    while(revnum) {
        digit = revnum % 10;
        revnum /= 10;
        switch (digit) {
            case 1 : printf("One ");
                     break;
            case 2 : printf("Two ");
                     break;
            case 3 : printf("Three ");
                     break;
            case 4 : printf("Four ");
                     break;
            case 5 : printf("Five ");
                     break;
            case 6 : printf("Six ");
                     break;
            case 7 : printf("Seven ");
                     break;
            case 8 : printf("Eight ");
                     break;
            case 9 : printf("Nine ");
                     break;
            case 0 : printf("Zero ");
                     break;
        }
    }
    printf("\n");
}

```

## Assignment 6

### Question 1
```c
#include <stdio.h>
#define PI 3.14159

void perimeter(int shape) {
    float d, l, b;
    switch (shape) {
        case 1: printf("Enter the diameter : ");
                scanf("%f", &d);
                printf("Perimeter = %f\n", 2*PI*d);
                break;
        case 2: printf("Enter the length : ");
                scanf("%f", &l);
                printf("Enter the breadth : ");
                scanf("%f", &b);
                printf("Perimeter = %f", 2*(l+b));
                break;
        case 3: printf("Enter the side length : ");
                scanf("%f", &l);
                printf("Perimeter = %f", 4*l);
                break;
    }
}

void area(int shape) {
    float d, l, b;
    switch (shape) {
        case 1: printf("Enter the diameter : ");
                scanf("%f", &d);
                printf("Area = %f", PI*d*d);
                break;
        case 2: printf("Enter the length : ");
                scanf("%f", &l);
                printf("Enter the breadth : ");
                scanf("%f", &b);
                printf("Area = %f", l*b);
                break;
        case 3: printf("Enter the side length : ");
                scanf("%f", &l);
                printf("Area = %f", l*l);
                break;
    }
}

int main() {
    int shape;
    printf("Choose a shape :\n1. Circle\n2. Rectangle\n3. Square\n\t\t: ");
    scanf("%d", &shape);
    perimeter(shape);
    area(shape);
    return 0;
}
```

### Question 2
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 500; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i%j == 0) 
                sum += j;
        }
        if (sum == i) printf("%d\n", i);
    }
}
```

### Question 3
```c
#include <stdio.h>

int main() {
    
    // using seive of erathosthenes
    int limit;
    printf("Enter the upper limit for which to check for primes : ");
    scanf("%d", &limit);
    int numbers[limit], primes[limit]; 

    //filling the numbers with natural numbers 
    for (int i = 0; i < limit; i++) {
        numbers[i] = i + 2;
    }

    //sorting primes
    for (int i = 0; i < limit; i++) {
        if (numbers[i] != -1) {
            for (int j = 2 * numbers[i] - 2; j < limit; j += numbers[i]) {
                numbers[j] = -1;
            }
        }
    }

    // making a different array for primes 
    int check = 0;
    for (int i = 0; i < limit; i++) {
        if (numbers[i] != -1) {
            primes[check] = numbers[i];
            check++;
        }
    }

    //printing the primes 
    printf("Printing the primes : \n");
    for (int i = 0; i < check; i++) {
        printf("%d\n", primes[i]);
    }
}
```

### Question 4
```c
/* WAP to print multiplication table as shown below for the numbers 1 to 5 using nested while and do-while
loops each separately.
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 12 14 16 18 20
3 6 9 12 15 18 21 24 27 30
4 8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50 */

#include <stdio.h>

int main() {
   int i = 1; 
   do {
        int j = 1;
        do {
            printf("%d\t", j*i);
            j++;
        } while(j <= 10);
        printf("\n");
        i++;
    } while(i <= 5);
}
```

### Question 5
```c
#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtr(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

int main() {
    int flag = 1;
    while (flag) {
        int choice;
        float a, b;
        printf("Enter the first operand : ");
        scanf("%f", &a);
        printf("Enter the second operand : ");
        scanf("%f", &b);
        printf("Choose : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nAny other number to end :\n\t");
        scanf("%d", &choice);
        switch(choice) {
            case 1 : printf("%f\n", add(a, b)); break;
            case 2 : printf("%f\n", subtr(a, b)); break;
            case 3 : printf("%f\n", multi(a, b)); break;
            case 4 : printf("%f\n", div(a, b)); break;
            default : flag = 0;
        }
    }
}
```

### Question 6
```c
#include <stdio.h>

int main() {
    int i = 5;
    while(i) {
        int j = 1;
        do {
            printf("%d\t", j);
            j++;
        } while(j <= 5);
        printf("\n");
        i--;
    }
}
```

## Assignment 7

### Question 1
```c
/* WAP that accepts ‘n’ numbers from keyboard and count how many of those numbers are even numbers using
user-defined function. The main() function reads all ‘n’ numbers one by one and at the same time sending them by
reference to a called function named ‘int count even()’. The job of the ‘count even’ function is to check the number
received by it as even or odd. For every even number received, it should increase a count variable and finally send
the value of the count variable to the main() function where it gets printed. */
#include <stdio.h>

int ifEven(int num, int count) {
    if(num%2==0) count++;
    return count;
}

int main() {
    int number, test, count = 0;
    printf("Enter the number of numbers : ");
    scanf("%d", &test);
    while(test) {
        scanf("%d", &number);
        count = ifEven(number, count);
        test--;
    }
    printf("The number of even number in the given list were : %d", count);

}
```

### Question 2
```c
/* WAP to compute the gross salary of an employee as per the data given below using call by reference.
The main() function reads basic-pay which is an integer and then computes the DA and HRA where DA = 20% of the
basic-pay and HRA = 10% of the basic-pay. Then it passes all these three parameters (basic-pay, DA, and HRA)
along with the variable gross salary (called gross-sal) to a called function ‘void compute-gross()’ where the gross
salary will be calculated as gross salary = basic-pay + DA+ HRA and finally the main() function will display the value
of gross-sal. */

// Excluding DA and HRA declaration here because it is unnecessary

#include <stdio.h>

float computeGross(float basicPay) {
    return basicPay * 1.3;
}

int main() {
    float basicPay;
    printf("Enter the basic pay of the employee : ");
    scanf("%f", &basicPay);
    printf("The gross salary of the employee : %0.3f", computeGross(basicPay));
}
```

### Question 3
```c
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime (int num) {
    int i = num, count = 0;
    while (i) {
        if (num % i == 0)
            count++;
        i--;
    }
    return ((count <= 2) ? true : false);
}

bool isArmstrong (int num) {
  int check, sum = 0, numb, count = 0;
  check = num;
  numb = num;
  do {
    check /= 10;
    count++;
  } while(check != 0);
  do {
    sum += pow((numb%10), count);
    numb /= 10;
  } while (numb != 0);
  return ((sum == num)? true: false);
}

bool isPerfect (int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) 
            sum += i;
    }
    return ((sum == num) ? true : false); 
}

int main () {
    int num;
    printf("Enter the number to check : ");
    scanf("%d", &num);
    printf((isPrime(num) ? "%d is a prime number.\n" : "%d is not a prime number.\n"), num);
    printf((isPerfect(num) ? "%d is a perfect number.\n" : "%d is not a perfect number.\n"), num);
    printf((isArmstrong(num) ? "%d is a armstrong number.\n" : "%d is not a armstrong number.\n"), num);
}

```

### Question 4
```c
/* WAP using user-defined function to find all strong numbers between 1 to n. Use a separate function to
compute the factorial of the corresponding number.
[Hint: A number in which the sum of factorial of individual digits is equal to the number is called strong number.
For example, 145 is a strong number because 145= 1! + 4! + 5!
Example: Input
Input lower limit: 1
Input upper limit: 1000
Output
Strong numbers between 1 and 1000: 1, 2, 145] */

#include <stdio.h>
#include <stdbool.h>

#define lli long long int

lli factorial(lli dig) {
    if (dig > 1) return factorial(dig-1) * dig;
    else return 1; 
}

bool checkStrong(lli num) {
    lli sum = 0, check = num;
    while (num) {
        sum += factorial(num % 10);
        num /= 10;
    }
    if (sum == check) return true;
    return false;
}

int main() {
    lli lowerLim, upperLim;
    printf("Enter the lower limit of the range : ");
    scanf("%lld", &lowerLim);
    printf("Enter the upper limit of the range : ");
    scanf("%lld", &upperLim);
    printf("The strong numbers between %lld and %lld are :\n", lowerLim, upperLim);
    for (lli i = lowerLim; i <= upperLim; i++) {
        if (checkStrong(i)) {
            printf("%lld\n", i);
        }
    }
}
```

### Question 5
```c
/* Q1. WAP to find the sum of the following series from 1 to n using user-defined function.
1!/1 + 2!/2 + 3!/3 + ..... + n!/n. For example, 1!/1+2!/2+3!/3+4!/4+5!/5 = 1+1+2+6+24=34.
[Hint: use a separate function to compute the factorial of the corresponding number.] */

int factorial(int n) {
    int a = 1, ret = 1, ret2 = 1;
    while(a<n) {
        ret *= a;
        ret2 += ret;
        a++;
    }
    return ret2;
}

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The required number is : %d ", factorial(n));
    return 0;
}
```

## Assignment 8

### Question 1
```c
#ifndef globvar
#define globvar

extern int numStd;
extern int stdMarks[100];
extern int min, max;
extern int sum, count;
extern float average;

#endif
```

### Question 2
```c
//Check out the globvar header file beforehand to know the global variable declaration

#include <stdio.h>
#include "globvar.h"

int numStd;
int stdMarks[100];
int min = 100, max = 0;
int sum = 0, count;
float average;


void display(int *num, int size) {
    printf("_________________________________________\n");
    //printf("sum = %d\naverage = %d\n, size= %d\n", sum, average, size);
    for (int i = 0; i < size; i++) {
        sum += *num;
        printf("%d\n", *num);
        num++;
    }
    average = sum/size;
    printf("Total Marks: %d\nAverage : %f\n", sum, average);
}


int minimumOf (int array[], int size) {
    for (int i = 0; i < size; i++) 
        min = (array[i] < min) ? array[i] : min;
    return min;
}

int maximumOf (int array[], int size) {
    for (int i = 0; i < size; i++) 
        max = (array[i] > max) ? array[i] : max;
    return max;
}

int stats(int *marks, int size) {
    int mAvg = 0, lAvg = 0;
    int frequency[size], unique = 0;

    //Using an array with common declaration because it is easier to deal with
    int array[size];
    for (int i = 0; i < size; i++) {   
        array[i] = *marks;
        marks++;
        frequency[i] = -1;
    }
    
    // Checking the number of students with marks more/less than average
    for (int i = 0; i < size; i++) {
        if (array[i] > average)
            mAvg++;
        if (array[i] < average)
            lAvg++;
    }

    //Checking the frequencies of the elements in the array
    for (int i = 0; i < size; i++) {
        count = 1;
        for (int j = i+1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) { 
                frequency[i] = count;
            }
    }

    //Printing the number of elements above/below avg
    printf("Total marks below average : %d\nTotal marks above average : %d\n", lAvg, mAvg);

    //Printing the frequency and total unique numbers
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d students scored %d marks\n", frequency[i], array[i]);
            unique++;
        }
            
    }
    printf("Total unique marks were : %d\n", unique);

}

void insert_mark() {
    int index, marks, temp;
    printf("Enter the position and and marks to which you have to insert : \n");
    scanf("%d %d", &index, &marks);
    for (int i = index; i < numStd; i++) {
        temp = stdMarks[i];
        stdMarks[i+1] = temp;
    }
    stdMarks[index] = marks;
    numStd++;
}

void delete_mark() {
    int index, marks, temp;
    printf("Enter the position and and marks to which you have to delete : \n");
    scanf("%d %d", &index, &marks);
    for (int i = index; i < numStd; i++) {
        temp = stdMarks[i];
        stdMarks[i-1] = temp;
    }
    stdMarks[numStd-1] = "\0";
    numStd--;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (stdMarks[i] > stdMarks[j]) {
                temp = stdMarks[i];
                stdMarks[i] = stdMarks[j];
                stdMarks[j] = temp;
            }
        }
    }
}

int main() {

    // QUESTION 1 
    
    printf("Enter the number of students : ");
    scanf("%d", &numStd);

    //Instanciating the marks array
    printf("Enter the marks of the students : \n");
    for (int i = 0; i < numStd; i++) {
        int check;
        scanf("%d", &check);
        if (check >= 0 && check <= 100) 
            stdMarks[i] = check;
        else {
            printf("Marks exceed the limits, try again !\n");
            i--;
        }             
    }

    //Displaying out the required work
    display(stdMarks, numStd);
    printf("Maximum Marks : %d\nMinimum Marks : %d\n", maximumOf(stdMarks, numStd), minimumOf(stdMarks, numStd));
    stats(stdMarks, numStd);



    //  QUESTION 2
    int oddEvenMarks[numStd], oddMarks[numStd], evenMarks[numStd], check = 0;
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] % 2 != 0) {
            oddMarks[check] = stdMarks[i];
            check++;
        }
    }

    int index = 0;
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] % 2 == 0) {
            evenMarks[check] = stdMarks[i];
            index++;
        }
    }

    index = 0;
    for (int i = 0; i < numStd; i++) {
        if (i <= check) {
            oddEvenMarks[i] = oddMarks[i];
        }
        else {
            oddEvenMarks[i] = evenMarks[index];
            index++;
        }
    }

    //Printing the oddEvenMarks array : 
    for (int i = 0; i < numStd; i++) {
        printf("%d\n", oddEvenMarks[i]);
    }


    // QUESTION 3

    int choice;
    printf("1. Enter a new Student\n2. Delete a Student from record\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1 : insert_mark();
        case 2 : delete_marks();
    }

    //QUESTION 4

    int position;
    printf("Enter the positon for the sorted array : ");
    scanf("%d", &position);
    sort(stdMarks, numStd);
    printf("The marks at the given index were : %d\n", stdMarks[position]);

    // QUESTION 5   

    int checkMarks;
    printf("Which marks do you want to check : ");
    scanf("%d", &checkMarks);
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] == checkMarks) {
            printf("Equal marks found at index %d !\n", i);
        }
    }


    return 0;
}
```
