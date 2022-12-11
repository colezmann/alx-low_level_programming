#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 * @head: pointer to the address of the head of the list
 * @n: integer component of new node
 * Return: address of the new element; NULL (otherwise)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
