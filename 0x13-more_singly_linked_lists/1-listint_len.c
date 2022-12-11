#include "lists.h"
/**
 * listint_len - returns the number of elements in a singly linked list
 * @h: list
 * Return: number of elements in a listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nr_nodes = 0;

	while (h)
	{
		nr_nodes++;
		h = h->next;
	}
	return (nr_nodes);
}
