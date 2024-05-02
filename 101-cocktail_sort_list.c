#include "sort.h"
/**
 * swap - is the swap function
 * @a: is the first list
 * @b: is the second list
 */
void swap(listint **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
	if (b->prev == NULL)
		*list = b;
 /**
 * cocktail_sort_list - sorts a doubly linked list of integer
 * it's so much like bubble sort but goes forward and bakcward
 * @list: is linked list
 */
void cocktail_sort_list(listint_t **list);

