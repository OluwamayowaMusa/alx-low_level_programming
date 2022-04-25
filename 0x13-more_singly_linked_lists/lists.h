#ifndef LISTS_H /*Double Guard*/
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*Header Files*/
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/*Functions Protptype*/
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif 
