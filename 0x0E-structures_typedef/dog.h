#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Description about dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
