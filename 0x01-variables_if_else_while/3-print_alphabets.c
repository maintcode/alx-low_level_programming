#include <stdio.h>

int main() {
    char ch = 'a';

    while (ch <= 'z') {
        putchar(ch);
        ch++;
    }

    ch = 'A';

    while (ch <= 'Z') {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return 0;
}
