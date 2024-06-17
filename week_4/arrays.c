// Nicole, 24T2 Week 4
// This program needs to be debugged.
// It adds 1 to any odd element in an array, and then prints out all elements 
// in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    // add 1 to all odd elements
    int i = 0;
    while (i < SIZE) {
        // printf("i is %d\n", i);
        if (array[i] % 2 != 0) {
            array[i] += 1;
        }
        i++;
    }

    // prints out all elements of the array
    int j = 0;
    while (j < SIZE) {
        // printf("j is %d\n", j);
        printf("%d", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}
