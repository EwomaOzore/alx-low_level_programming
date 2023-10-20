#include "main.h"
#include <stdio.h>

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i]; i++)
    {
        if (separators[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string str
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize = 1;

    while (*str)
    {
        if (is_separator(*str))
        {
            capitalize = 1;
        }
        else if (capitalize && *str >= 'a' && *str <= 'z')
        {
            *str -= ('a' - 'A');
            capitalize = 0;
        }
        else
        {
            capitalize = 0;
        }
        str++;
    }

    return ptr;
}
