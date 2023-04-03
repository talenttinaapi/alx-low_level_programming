#include "main.h"
#include <stddef.h>
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: Pointer to the source of data to be copied
 * @j: Number of bytes to be copied
 *Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int j)
{
	unsigned int i;

	for (i = 0; i < j; i++)
			dest[i] = src[i];

	return (dest);
}
