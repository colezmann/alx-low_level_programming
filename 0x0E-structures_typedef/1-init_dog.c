#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable name
 * @name: member of struct
 * @age: member of struct
 * @owner: member of struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
