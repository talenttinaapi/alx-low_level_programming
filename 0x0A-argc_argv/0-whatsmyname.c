#include "main.h"
#include <stdio.h>

/**
 *main - prints its name
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
