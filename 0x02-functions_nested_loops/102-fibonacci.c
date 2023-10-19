#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    long first = 1, second = 2, next;

    for (n = 0; n < 50; n++)
    {
        if (n < 49)
            printf("%ld, ", first);
        else
            printf("%ld", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return (0);
}
