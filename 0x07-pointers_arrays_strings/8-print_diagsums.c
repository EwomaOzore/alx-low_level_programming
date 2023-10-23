#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix represented as a one-dimensional array.
 * @size: The size of the square matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate the sum of the main diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	/* Calculate the sum of the other diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums */
	printf("%d, %d\n", sum1, sum2);
}
