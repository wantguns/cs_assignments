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
