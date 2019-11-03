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