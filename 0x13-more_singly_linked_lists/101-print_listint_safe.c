#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * looped_listint_len - counts the number of unique nodes in a looped
 * singly linked list
 * @head: pointer to the head of the linked list to be examined
 * Return: number of unique nodes in the list; 0 (otherwise)
 */
size_t looped_listint_len(const listint_t *head)
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
 * print_listint_safe - prints a singly linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, i = 0;

	if (head == NULL)
		exit(98);

	num_nodes = looped_listint_len(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < num_nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
