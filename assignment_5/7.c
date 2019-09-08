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
