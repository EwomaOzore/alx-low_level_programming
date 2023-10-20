#include <stdio.h>

int main(void)
{
    long number = 612852475143;
    long largest_prime = -1;
    long i;

    while (number % 2 == 0)
    {
        largest_prime = 2;
        number = number / 2;
    }

    for (i = 3; i <= number; i = i + 2)
    {
        while (number % i == 0)
        {
            largest_prime = i;
            number = number / i;
        }
    }

    printf("%ld\n", largest_prime);
    return (0);
}
