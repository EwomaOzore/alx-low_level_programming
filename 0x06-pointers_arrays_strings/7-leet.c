#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_chars[] = "aAeEoOtTlL";
    char leet_replacements[] = "4433007711";

    while (*str)
    {
        int i = 0;
        while (leet_chars[i])
        {
            if (*str == leet_chars[i])
            {
                *str = leet_replacements[i];
                break;
            }
            i++;
        }
        str++;
    }

    return ptr;
}
