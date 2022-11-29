#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the head of linked list
 * @str: string to be added to list
 * Return: address of the new element; NULL (otherwise)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	int len;

	if (str == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		;

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
