#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a singly linked list; sets the head to NULL
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
