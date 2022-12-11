#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a singly linked list and
 * returns the head node's data (n)
 * @head: list
 * Return: data of the head node; 0 (if list is empty)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
