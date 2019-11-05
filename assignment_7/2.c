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