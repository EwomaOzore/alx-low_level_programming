#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub_needle = needle;

		while (*haystack && *sub_needle && *haystack == *sub_needle)
		{
			haystack++;
			sub_needle++;
		}

		if (!*sub_needle)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
