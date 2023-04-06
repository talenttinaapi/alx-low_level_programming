#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - Returns the natural square root of number
 *@n: number to calculate the natural square root
 *
 *Return: the natural sqaure root
 */
int _sqrt(int n, int i);

/**
 *_sqrt - Calculates the natural square root
 *@n: number to calculate the square root
 *@i; iterate number
 *
 *Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = 1 * 1;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (calculate_sqrt(n, i + 1));
}
