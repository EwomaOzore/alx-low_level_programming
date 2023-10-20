#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: A pointer to the modified string str
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*str)
    {
        if (islower(*str))
        {
            *str = toupper(*str);
        }
        str++;
    }

    return ptr;
}
