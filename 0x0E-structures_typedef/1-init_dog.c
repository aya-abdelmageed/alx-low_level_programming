#include "dog.h"
#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer struct dog
 * @name: name input
 * @age: input
 * @owner: input
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
