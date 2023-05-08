#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_buffer - ...
 *@file: ...
 *
 *Return: ...
 */
void close_file(int fd);
char *create_buffer(char *file);


char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 *close_file - ...
 *@fd: ...
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - ...
 *@argc: ...
 *@argv: ...
 *
 *Return: ...
 *
 *Description: ...
 *If file_from does not exist or cannot be read - ...
 *If file_to cannot be created or written to - ...
 *If file_to or file_from cannot be closed - ...
 */
int main(int argc, char *argv[])
{
	int from, op, k, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(op, buffer, k);
		if (op == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		k = read(from, buffer, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buffer);
	close_file(from);
	close_file(op);

	return (0);
}
