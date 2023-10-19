#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		next = fib1 + fib2;
		printf("%lu", next);
		if (i < 97)
			printf(", ");
		else
			printf("\n");
		fib1 = fib2;
		fib2 = next;
	}

	return (0);
}
