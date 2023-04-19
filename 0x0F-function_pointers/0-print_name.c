#include "function_pointers.h"

/**
 *print_name - Prints a name
 *@name: The name to print
 *@f: pointer to function
 *
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
