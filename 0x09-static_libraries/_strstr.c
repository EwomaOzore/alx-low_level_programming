#include "main.h"
#include <stddef.h> // Include <stddef.h> for the definition of NULL

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	       	haystack++;
	}
	return (NULL);
}
