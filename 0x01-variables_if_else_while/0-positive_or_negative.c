#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0)); // Seed the random number generator

    n = rand() % (RAND_MAX + 1) - RAND_MAX / 2; // Generate a random number in the range [-RAND_MAX/2, RAND_MAX/2]

    printf("The number %d is ", n);
    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }
    printf("\n");

    return 0;
}
