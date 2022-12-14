#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the address of the head of the singly linked list
 * @idx: index of the list where the new node is to be added
 * @n: new node's data
 * Return: address of the new node (Success); NULL (otherwise)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);

}
