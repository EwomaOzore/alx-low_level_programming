#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill with.
 * @n: Number of bytes to fill.
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s_ptr = b;
		s_ptr++;
	}

	return (s);
}
