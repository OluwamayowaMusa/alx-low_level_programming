#include "dog.h"
#include <stdio.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer of type struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;
	int i;

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
	{
		free(dog_1);
		return (NULL);
	}
	dog_1->age = age;
	dog_1->name = malloc(sizeof(char *));
	if (dog_1->name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		dog_1->name[i] = name[i];
	dog_1->name[i] = '\0';
	dog_1->owner = malloc(sizeof(char *));
	if (dog_1->owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		dog_1->owner[i] = owner[i];
	dog_1->owner[i] = '\0';

	return (dog_1);
}
