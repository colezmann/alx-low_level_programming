#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
