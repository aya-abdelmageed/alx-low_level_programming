#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * new_dog - function that creates a new dog
 * @name: input
 * @age: input
 * @owner: input
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int l1 = 0, l2 = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	l1 = _strlen(name) + 1;
	l2 = _strlen(owner) + 1;
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(char) * l1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * l2);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';

	new->age = age;
	for (i = 0; owner[i] != '\0'; i++)
	{
		new->owner[i] = owner[i];
	}
	new->owner[i] = '\0';

	return (new);
}
