#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - determines the length of a string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string from src to dest
 * @src: source string
 * @dest: buffer to store copy of src
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: member of struct
 * @age: member of struct
 * @owner: member of struct
 * Return: new instance of struct dog (Success); NULL (otherwise)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);
	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	bingo->name = _strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = _strcpy(bingo->owner, owner);
	return (bingo);
}
