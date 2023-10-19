#include <stdio.h>

int main(void)
{
    int n;
    long long first = 1, second = 2, next;

    for (n = 0; n < 50; n++)
    {
        if (n < 49)
            printf("%lld, ", first);
        else
            printf("%lld", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return (0);
}
