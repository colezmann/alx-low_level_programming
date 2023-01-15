#include "lists.h"
/**
 * get_dnodeint_at_index - locates the nth node of a doubly linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: address of the nth node; NULL (if the node doesn't exist)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
