#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the input string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
