#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: name to be printed
 * @f: function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
