#include "dog.h"
#include <stdio.h>

/**
 * print_dog -Prints the structure of a dog
 * @d: Pointer to type struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
