// Nicole, 24T2 Week 7
// Command line arguments demo

#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;
    while (i < argc) {
        printf("%s ", argv[i]);
        i++;
    }

    return 0;
}
