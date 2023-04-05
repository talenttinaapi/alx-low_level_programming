#include "main.h"

/**
 *factorial - Calculates the factorial of a number
 *j: the number to calculate the factorial
 *
 *Return: The factorial of a given number
 */
int factorial(int j)
{
	if (j < 0)
		return (-1);

	if (j <= 1)
		return (1);

	return (j * factorial(j - 1));
}
