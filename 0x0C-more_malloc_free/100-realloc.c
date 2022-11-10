#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: new size of memory block
 * Return: ptr (if new_size == old_size);
 * NULL (if new_size == 0 and ptr != NULL);
 * pointer to the reallocated memory block (otherwise)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *re_mem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		re_mem = malloc(new_size);
		if (re_mem == NULL)
			return (NULL);
		else
			return (re_mem);
	}
	re_mem = malloc(new_size);
	if (re_mem == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)re_mem + i) = *((char *)ptr + i);
	free(ptr);
	return (re_mem);
}
