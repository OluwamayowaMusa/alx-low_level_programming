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
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
