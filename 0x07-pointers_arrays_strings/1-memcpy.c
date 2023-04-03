#include "main.h"
#include <stddef.h>
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: Pointer to the source of data to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, const char *src, size_t n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;

	return (ptr);
}

