#include <stdio.h>

int main(void) {
    unsigned long int a = 1, b = 2, c;
    int count = 0;

    printf("%lu, %lu, ", a, b);
    count = 2;  // Start with 2 numbers already printed.

    while (count < 98) {
        c = a + b;
        if (count == 97) {
            printf("%lu\n", c);  // Last number, so print with a newline.
        } else {
            printf("%lu, ", c);
        }
        a = b;
        b = c;
        count++;
    }

    return (0);
}
