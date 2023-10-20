#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes, from src to dest
 * @dest: The destination string to which src will be copied
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return ptr;
}
