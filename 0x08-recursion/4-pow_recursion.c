#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to the power of y
 *@x: the value to multiply
 *@y: the times to multiply the value
 *
 *Return: Value multiplied y times 0r -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	int result = _pow_recursion(x, y / 2);

	if (y % 2 == 0)
		return (result * result);

	return (result * result * x);
}
