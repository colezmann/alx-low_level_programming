#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 * @head: pointer to the address of the head of the linked list
 * @index: index of the node to be deleted (index starts at 0)
 * Return: 1 (success); -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	cpy = tmp->next;
	tmp->next = cpy->next;
	free(cpy);

	return (1);
}
