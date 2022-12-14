#include "lists.h"
/**
 * sum_listint - sums up all the data (n) of a singly linked list
 * @head: pointer to the head of list
 * Return: sum of all the data in the list; 0 (if list is empty)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
