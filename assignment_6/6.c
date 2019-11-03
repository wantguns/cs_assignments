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