#include "sort.h"
/**
 * swap - is the swap function
 * @list: is the lisg
 * @a: is the first list
 * @b: is the second list
 */
void swap(listint_t **list, listint_t *a, listint_t *b)
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
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integer
 * it's so much like bubble sort but goes forward and bakcward
 * @list: is the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *a, *b;
	int i = 1;

	if (!(*list) || !(list))
		return;

	while (i != 0)
	{
		i = 0;
		a = (*list)->next;
		while (a)
		{
			b = a;
			a = a->next;
			if (b->prev->n > b->n)
			{
				swap(list, b->prev, b);
				print_list(*list);
				i = 1;
			}
		}

		while (b && b->next != NULL)
		{
			if (b->n > b->next->n)
			{
				swap(list, b, b->next);
				print_list(*list);
				i = 1;
			}
			b = b->prev;
		}
	}
}
