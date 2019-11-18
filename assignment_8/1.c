//Check out the globvar header file beforehand to know the global variable declaration

#include <stdio.h>
#include "globvar.h"

int numStd;
int stdMarks[100];
int min = 100, max = 0;
int sum = 0, count;
float average;


void display(int *num, int size) {
    printf("_________________________________________\n");
    //printf("sum = %d\naverage = %d\n, size= %d\n", sum, average, size);
    for (int i = 0; i < size; i++) {
        sum += *num;
        printf("%d\n", *num);
        num++;
    }
    average = sum/size;
    printf("Total Marks: %d\nAverage : %f\n", sum, average);
}


int minimumOf (int array[], int size) {
    for (int i = 0; i < size; i++) 
        min = (array[i] < min) ? array[i] : min;
    return min;
}

int maximumOf (int array[], int size) {
    for (int i = 0; i < size; i++) 
        max = (array[i] > max) ? array[i] : max;
    return max;
}

int stats(int *marks, int size) {
    int mAvg = 0, lAvg = 0;
    int frequency[size], unique = 0;

    //Using an array with common declaration because it is easier to deal with
    int array[size];
    for (int i = 0; i < size; i++) {   
        array[i] = *marks;
        marks++;
        frequency[i] = -1;
    }
    
    // Checking the number of students with marks more/less than average
    for (int i = 0; i < size; i++) {
        if (array[i] > average)
            mAvg++;
        if (array[i] < average)
            lAvg++;
    }

    //Checking the frequencies of the elements in the array
    for (int i = 0; i < size; i++) {
        count = 1;
        for (int j = i+1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) { 
                frequency[i] = count;
            }
    }

    //Printing the number of elements above/below avg
    printf("Total marks below average : %d\nTotal marks above average : %d\n", lAvg, mAvg);

    //Printing the frequency and total unique numbers
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d students scored %d marks\n", frequency[i], array[i]);
            unique++;
        }
            
    }
    printf("Total unique marks were : %d\n", unique);

}

int main() {
    printf("Enter the number of students : ");
    scanf("%d", &numStd);

    //Instanciating the marks array
    printf("Enter the marks of the students : \n");
    for (int i = 0; i < numStd; i++) {
        int check;
        scanf("%d", &check);
        if (check >= 0 && check <= 100) 
            stdMarks[i] = check;
        else {
            printf("Marks exceed the limits, try again !\n");
            i--;
        }             
    }

    //Displaying out the required work
    display(stdMarks, numStd);
    printf("Maximum Marks : %d\nMinimum Marks : %d\n", maximumOf(stdMarks, numStd), minimumOf(stdMarks, numStd));
    stats(stdMarks, numStd);

    return 0;
}