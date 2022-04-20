#ifndef DOG_H
#define DOG_H
#define NULL (void *)0

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
