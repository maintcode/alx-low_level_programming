#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;

    // Check if the number is positive, negative, or zero
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("%d is zero\n", n);
    }

    return 0;
}
