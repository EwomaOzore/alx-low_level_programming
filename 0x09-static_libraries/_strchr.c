#include "main.h"
#include <stddef.h> // Include <stddef.h> for the definition of NULL

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
