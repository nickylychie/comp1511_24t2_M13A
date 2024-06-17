#include <stdio.h>

#define SIZE 5

int main(void) {

    int letter;
    int hello;

    while (scanf("%d %d", &letter, &hello) == 2) {
        printf("scanned in %d and %d\n", letter, hello);
    }

    return 0;
}
