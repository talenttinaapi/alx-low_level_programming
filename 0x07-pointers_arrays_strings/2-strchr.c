#include <stdio.h>
#include "main.h"

/**
 *_strchr - Entry point
 *@n: input
 *@c: input
 *Return: Always 0
 */
char *_strchr(char *n, char c)
{
	int i;

	for (i = 0; n[i] >= '\0'; i++)
	{
		if (n[i] == c)
			return (n + i);
	}

	return (NULL);
}
