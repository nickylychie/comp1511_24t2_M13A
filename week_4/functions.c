// Nicole, 24T2 Week 4
// This program uses a function to add 2 integers together

#include <stdio.h>

int addition(int a, int b);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // TODO: Add 2 integers together
    result = addition(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

int addition(int a, int b) {
    int result = a + b;

    return result;
}
