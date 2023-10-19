#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator with the current time */
    n = rand() - RAND_MAX / 2; /* Generate a random number and store it in 'n' */

    printf("%d is ", n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return (0);
}