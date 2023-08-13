#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, last_digit;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between -1000 and 1000
    n = rand() % 2001 - 1000;

    // Get the last digit of the number
    last_digit = n % 10;

    // Check the value of the last digit
    printf("Last digit of %d is ", n);
    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
