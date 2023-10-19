#include <stdio.h>

int main(void)
{
    unsigned long int a = 1, b = 2, next, i;

    printf("%lu, %lu, ", a, b);

    for (i = 3; i <= 98; i++)
    {
        next = a + b;
        a = b;
        b = next;

        if (i == 98)
            printf("%lu\n", next);
        else
            printf("%lu, ", next);
    }

    return (0);
}
