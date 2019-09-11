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
