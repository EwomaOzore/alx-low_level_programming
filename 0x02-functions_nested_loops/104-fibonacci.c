#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c, count = 0;

    printf("%lu, %lu, ", a, b);
    count = 2;  // Start with 2 numbers already printed.

    while (count < 98)
    {
        c = a + b;
        if (count == 97)
        {
            // Print the last number without a comma.
            printf("%lu\n", c);
        }
        else
        {
            printf("%lu, ", c);
        }
        a = b;
        b = c;
        count++;
    }

    return (0);
}
