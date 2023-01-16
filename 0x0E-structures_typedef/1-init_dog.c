#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d : struct to use
 * @name : char to use
 * @age : float to use
 * @owner : char to use
 * Description : "intialize the struct dog"
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
