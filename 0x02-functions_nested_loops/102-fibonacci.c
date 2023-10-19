#include <stdio.h>

int main(void)
{
    int n;
    int first = 1, second = 2, next;

    for (n = 0; n < 50; n++)
    {
        if (n < 49)
            printf("%d, ", first);
        else
            printf("%d", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
