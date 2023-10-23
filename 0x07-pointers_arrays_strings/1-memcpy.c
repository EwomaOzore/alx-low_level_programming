#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (n--)
		*dest_ptr++ = *src_ptr++;

	return (dest);
}
