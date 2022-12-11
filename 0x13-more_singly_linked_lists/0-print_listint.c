#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a singly linked list
 * @h: list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nr_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nr_nodes++;
		h = h->next;
	}
	return (nr_nodes);
}
