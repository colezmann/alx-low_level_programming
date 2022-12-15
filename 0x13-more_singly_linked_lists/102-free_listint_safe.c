#include "lists.h"
#include <stdlib.h>
/**
 * looped_listint_length - counts the number of unique nodes in a looped
 * singly linked list
 * @head: pointer to the head of the linked list to be examined
 * Return: number of unique nodes in the list; 0 (otherwise)
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				num_nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				num_nodes++;
				tortoise = tortoise->next;
			}
			return (num_nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a singly linked list safely
 * (including lists with a loop)
 * @h: pointer to the address of the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t num_nodes, i;

	num_nodes = looped_listint_length(*h);

	if (num_nodes == 0)
	{
		for (; h != NULL && *h != NULL; num_nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (i = 0; i < num_nodes; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;

	return (num_nodes);
}
