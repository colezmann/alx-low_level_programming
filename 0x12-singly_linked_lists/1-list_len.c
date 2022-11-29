#include "lists.h"
/**
 * list_len - determines the number of elements in a linked list
 * @h: linked list
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
