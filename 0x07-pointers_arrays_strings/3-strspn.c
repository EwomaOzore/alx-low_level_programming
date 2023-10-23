#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	char *a;

	while (*s && found)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
	}

	return (count);
}
