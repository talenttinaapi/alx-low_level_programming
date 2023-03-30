#include "main.h"
/**
 *leet - encode into 1337speak
 *@n: input value
 *Return: n value
 */

char *leet(char *str)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
			
		}

	}
	return (str);
}
