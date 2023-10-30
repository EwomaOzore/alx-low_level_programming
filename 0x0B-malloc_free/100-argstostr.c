#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of arguments
 * @av: the array of argument strings
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}

	concatenated = (char *)malloc(len * sizeof(char) + 1);

	if (concatenated == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated[k++] = av[i][j];
			j++;
		}
		concatenated[k++] = '\n'; /* Add a newline character */
	}

	concatenated[k] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
