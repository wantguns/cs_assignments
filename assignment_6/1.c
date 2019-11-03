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