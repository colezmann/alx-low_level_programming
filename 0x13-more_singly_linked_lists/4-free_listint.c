#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a singly linked list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
