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