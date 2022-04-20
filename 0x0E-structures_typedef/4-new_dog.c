#include "dog.h"

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

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);
	dog_1->name = name;
	dog_1->age = age;
	dog_1->owner = owner;

	return (dog_1);
}
