#include <stdlib.h>
#include "lists.h"

/**
 *list_len - returns num of elements in a linked list
 *@j: pointer to the list_t list
 *
 *Return: number of elements in h
 */
size_t list_len(const list_t *j)
{
	size_t n = 0;

	while (j)
	{
	n++;
	j = j->next;
	}
	return (n);
}

