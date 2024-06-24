#include <stdio.h>

#define SIZE 5

int main(void) {

    int letter;

    while (scanf("%d", &letter) == 1) {
        printf("scanned in %d\n", letter);
    }

    return 0;
}
