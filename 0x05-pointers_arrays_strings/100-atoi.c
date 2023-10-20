#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int overflown = 0;

    /* Skip leading spaces */
    while (s[i] == ' ')
        i++;

    /* Handle the sign (positive/negative) */
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    /* Convert the digits to an integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Check for integer overflow */
        if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
        {
            overflown = 1;
            break;
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    if (overflown)
    {
        if (sign == 1)
            return INT_MAX;
        else
            return INT_MIN;
    }

    return (result * sign);
}
