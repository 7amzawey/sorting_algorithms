#include "sort.h"
/**
 * swap - swaps two nodes of doubly linked list
 * @a: the first linked list
 * @list: is the list.
 * @b: is the 2nd linked list
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
 * insertion_sort_list - sorts an array of integers in ascending order using
 * the insertion sort algorithe
 * @list: is the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!list || !(*list) || !(*list)->next)
		return;
	a = (*list)->next; /*a =3*/
	/*5, 3, 0, 12, 1*/
	while (a)
	{
		b = a;/*b = 3*/
		a = a->next;/*a = 0*/
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				/*b->prev = 5  b = 3*/
				swap(list, b->prev, b);/*b->prev = 3, b = 5*/
				print_list(*list);/*3, 5, 0, 12, 1*/
			}
			else
				b = b->prev;/*b->prev = , b =*/ 
		}
	}
}
