#include <stdio.h>

/**
 * struct User - User description
 * @name: User name
 * @email: User email
 * @age
 *
 * Description: User Description
 */
struct User
{
	char *name;
	char *email;
	int age;
};

/**
 * main - learning structures
 *
 * Return: 0
 */
int main(void)
{
	struct User user;

	user.name = "Foo Bar";
	user.email = "foo@hbtn.io";
	user.age = 98;
	return (0);
}
