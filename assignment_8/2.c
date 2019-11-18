/* Extend the program by separating the odd and even marks into two separate arrays named as
odd_marks and even_marks respectively and finally copied these two arrays into a third arrays named
as odd_even_marks so that all the odds marks are stored before all the marks which are even. */

#include "globvar.h"
#include <stdio.h>

int numStd;
int stdMarks[100];
int min = 100, max = 0;
int sum = 0, count;
float average;

int main() {
    int oddEvenMarks[numStd], oddMarks[numStd], evenMarks[numStd], check = 0;
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] % 2 != 0) {
            oddMarks[check] = stdMarks[i];
            check++;
        }
    }

    int index = 0;
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] % 2 == 0) {
            evenMarks[check] = stdMarks[i];
            index++;
        }
    }

    index = 0;
    for (int i = 0; i < numStd; i++) {
        if (i <= check) {
            oddEvenMarks[i] = oddMarks[i];
        }
        else {
            oddEvenMarks[i] = evenMarks[index];
            index++;
        }
    }

    //Printing the oddEvenMarks array : 
    for (int i = 0; i < numStd; i++) {
        printf("%d\n", oddEvenMarks[i]);
    }
}