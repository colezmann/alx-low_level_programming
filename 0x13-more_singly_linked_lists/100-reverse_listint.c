#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the address of the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *post;

	if (head == NULL || *head == NULL)
		return (NULL);

	pre = NULL;
	while (*head != NULL)
	{
		post = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = post;
	}
	(*head) = pre;

	return (*head);
}
