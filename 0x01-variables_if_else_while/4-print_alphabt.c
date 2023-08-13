#include <stdio.h>

int main() {
    char ch = 'a';

    while (ch <= 'z') {
        if (ch != 'q' && ch != 'e') {
            putchar(ch);
        }
        ch++;
    }

    putchar('\n');

    return 0;
}
