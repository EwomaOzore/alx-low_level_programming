#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *rot13(char *str)
{
    char *ptr = str;

    while (*str)
    {
        char lowercase = (*str >= 'a' && *str <= 'z');
        char uppercase = (*str >= 'A' && *str <= 'Z');

        if (lowercase || uppercase)
        {
            char base = (lowercase) ? 'a' : 'A';
            *str = (char)((((*str - base) + 13) % 26) + base);
        }
        str++;
    }

    return ptr;
}
