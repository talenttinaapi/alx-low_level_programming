#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - Returns the natural square root of number
 *@n: number to calculate the natural square root
 *
 *Return: the natural sqaure root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, i));
}

/**
 *_sqrt - Calculates the natural square root
 *@n: number to calculate the square root
 *@i; iterate number
 *
 *Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);

	if (square == n)
		return (i);

	return (_sqrt(n, i + 1));
}
