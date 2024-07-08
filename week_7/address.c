// Nicole, 24T2 Week 7
// Addresses demo

#include <stdio.h>

int main(void) {

    int num = 4;
    printf("Address of num is %p\n", &num);
    int *num_ptr = &num;
    printf("Address stored in num_ptr is %p\n", num_ptr);
    printf("but the address of num_ptr is %p\n", &num_ptr);

    int array[4];
    printf("Address of array is %p\n", &array);
    printf("Address of array[0] is %p\n", &array[0]);
    printf("Address of array[1] is %p\n", &array[1]);

    return 0;
}
