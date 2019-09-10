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
