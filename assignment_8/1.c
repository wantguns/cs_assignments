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

void insert_mark() {
    int index, marks, temp;
    printf("Enter the position and and marks to which you have to insert : \n");
    scanf("%d %d", &index, &marks);
    for (int i = index; i < numStd; i++) {
        temp = stdMarks[i];
        stdMarks[i+1] = temp;
    }
    stdMarks[index] = marks;
    numStd++;
}

void delete_mark() {
    int index, marks, temp;
    printf("Enter the position and and marks to which you have to delete : \n");
    scanf("%d %d", &index, &marks);
    for (int i = index; i < numStd; i++) {
        temp = stdMarks[i];
        stdMarks[i-1] = temp;
    }
    stdMarks[numStd-1] = "\0";
    numStd--;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (stdMarks[i] > stdMarks[j]) {
                temp = stdMarks[i];
                stdMarks[i] = stdMarks[j];
                stdMarks[j] = temp;
            }
        }
    }
}

int main() {

    // QUESTION 1 
    
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



    //  QUESTION 2
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


    // QUESTION 3

    int choice;
    printf("1. Enter a new Student\n2. Delete a Student from record\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1 : insert_mark();
        case 2 : delete_marks();
    }

    //QUESTION 4

    int position;
    printf("Enter the positon for the sorted array : ");
    scanf("%d", &position);
    sort(stdMarks, numStd);
    printf("The marks at the given index were : %d\n", stdMarks[position]);

    // QUESTION 5   

    int checkMarks;
    printf("Which marks do you want to check : ");
    scanf("%d", &checkMarks);
    for (int i = 0; i < numStd; i++) {
        if (stdMarks[i] == checkMarks) {
            printf("Equal marks found at index %d !\n", i);
        }
    }


    return 0;
}