#ifndef RO
#define RO
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - entry point
 * @name : char of name
 * @age : int of ge
 * @owner : char of name
 * Description : " struct dog to say name age and owner"
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
