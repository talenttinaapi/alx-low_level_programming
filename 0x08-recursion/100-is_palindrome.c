#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string
 *Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome - detects if a string is a palindrome
 *comparator - compares each character of the string
 *@s: string
 *@n1: smallest iterator
 *@n2: bigges iterator
 *Return: 1 if is a palindrom, 0 if not
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/*comparator - compares each character of the string*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
