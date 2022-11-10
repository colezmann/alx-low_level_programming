#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: bytes size of each array element
 * Return: pointer to the allocated memory (Success); NULL (otherwise)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
