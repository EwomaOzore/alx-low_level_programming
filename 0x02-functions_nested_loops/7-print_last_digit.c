#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The integer to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == 0)
		last_digit = 0;
	else if (n == INT_MIN)  /* Handle the special case of INT_MIN */
		last_digit = 8;      /* The last digit of INT_MIN is 8 */
	else if (n < 0)
		last_digit = -n % 10;
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);

	return last_digit;
}
