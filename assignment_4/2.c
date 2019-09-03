/*WAP to calculate and print the Electricity bill of a given customer. The customer id., name and unit
consumed by the user should be taken from the keyboard and display the total amount to pay by the
customer.

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of
Rs. 100/-. */

#include <stdio.h>
int main() {
float custid, unit, rate, bill, surcharge;
char name[20];
scanf("%f %s %f", &custid, &name, &unit);
printf("Customer IDNO : %0.0f\n", custid);
printf("Customer Name : %s\n", name);
printf("Units consumed : %0.0f\n", unit);
if (unit < 200) rate = 1.2;
if (unit >= 200 && unit < 400) rate = 1.5;
if (unit >= 400 && unit < 600) rate = 1.8;
if (unit >= 600) rate = 2;
bill = rate * unit;
if (bill <= 100) {
        printf("Your bill has exceeded the minimum amount.\n");
        return 0;
}
printf("Amount charges at Rs. %0.2f per unit : %0.2f\n", unit, bill);
if (bill >= 400) {
        printf("Surcharge amount : %f\n", 0.15*bill);
        bill *= 1.15;
        printf("Net amount to be paid by the customer : %0.2f\n", bill);
return 0;
}
}



