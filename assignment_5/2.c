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
