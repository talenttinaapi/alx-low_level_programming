#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints elements of a linked list
 *@g: pointer to the list_t
 *
 *Return: nodes printed
 */
size_t print_list(const list_t *g)
{
	size_t s = 0;

	while (g)
	{
	if (!g->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", g->len, g->str);
	g = g->next;
	s++;
	}

	return (s);
}

