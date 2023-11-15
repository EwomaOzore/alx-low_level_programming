#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of argument strings
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_address = (char *)main;

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02x ", main_address[i]);
	}

	printf("%02x\n", main_address[i]);

	return (0);
}
