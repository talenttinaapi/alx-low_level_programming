#include "main.h"

/**
 *get_endianness - ...
 *Return: ...
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *)&k;

	return (*c);
}

