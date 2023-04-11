#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Prints the product of two args numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s number2\n", argv[0]);
		return (1);
	}
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
		return (0);
}
