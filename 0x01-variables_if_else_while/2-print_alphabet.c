#include <stdio.h>

int main() {
    char ch = 'a';

    while (ch <= 'z') {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return 0;
}
