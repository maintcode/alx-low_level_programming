#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0)); // Seed the random number generator

    n = rand(); // Generate a random number

    printf("Last digit of %d is ", n);

    int last_digit = n % 10; // Get the last digit

    printf("%d and is ", last_digit);

    if (last_digit > 5) {
        printf("greater than 5");
    } else if (last_digit == 0) {
        printf("0");
    } else {
        printf("less than 6 and not 0");
    }

    printf("\n");

    return 0;
}
