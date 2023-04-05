#include "main.h"

/**
 *_strlen_recursion - Calculates length of the string recursively
 *@s: the string to count
 *
 *Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
