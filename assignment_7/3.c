/* WAP to compute the gross salary of an employee as per the data given below using call by reference.
The main() function reads basic-pay which is an integer and then computes the DA and HRA where DA = 20% of the
basic-pay and HRA = 10% of the basic-pay. Then it passes all these three parameters (basic-pay, DA, and HRA)
along with the variable gross salary (called gross-sal) to a called function ‘void compute-gross()’ where the gross
salary will be calculated as gross salary = basic-pay + DA+ HRA and finally the main() function will display the value
of gross-sal. */

// Excluding DA and HRA declaration here because it is unnecessary

#include <stdio.h>

float computeGross(float basicPay) {
    return basicPay * 1.3;
}

int main() {
    float basicPay;
    printf("Enter the basic pay of the employee : ");
    scanf("%f", &basicPay);
    printf("The gross salary of the employee : %0.3f", computeGross(basicPay));
}