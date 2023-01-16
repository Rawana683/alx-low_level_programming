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
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
