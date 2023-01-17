#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - entry point
 * @name : char to use
 * @age : int to use
 * @owner: char to use
 * Description : "new dog created"
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *r_dog;
	int i, n, o;

	r_dog = malloc(sizeof(*r_dog));
	if (!(r_dog) || !(name ) || !(owner))
	{
		return (NULL);
		free(r_dog);
	}
	for (n = 0; name[n]; n++)
	{
		continue;
	}
	for (o = 0; owner[o]; o++)
	{
		continue;
	}
	r_dog->name = malloc(n + 1);
	r_dog->owner = malloc(o + 1);
	if (!(r_dog->name) || !(r_dog->owner))
	{
		free(r_dog->name);
		free(r_dog->owner);
			free(r_dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		r_dog->name[i] = name[i];
	}
	r_dog->name[i] = '\0';
	r_dog->age = age;
	for (i = 0; i < o; i++)
	{
		r_dog->owner[i] = owner[i];
	}
	r_dog->owner[i] = '\0';
	return (r_dog);
}
