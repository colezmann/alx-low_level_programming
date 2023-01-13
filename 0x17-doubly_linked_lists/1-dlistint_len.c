#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
		size_t num_nodes = 0;

		while (h)
		{
				h = h->next;
				num_nodes++;
		}

		return (num_nodes);
}
