#include "sort.h"
/**
 * get_biggest_gap - get the biggest gap
 * @size: is the array size
 * Return: the biggest gap
 */
size_t get_biggest_gap(size_t size)
{
	size_t n = 1;

	while (n < size)
	{
		n = n * 3 + 1;
	}
	return ((n - 1) / 3);
}
/**
 * shell_sort - is a function to stort an array of integers in ascending order
 * using the shell sort.
 * @array: is the array
 * @size: is the actuall arry.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

for (gap = get_biggest_gap(size); gap > 0; gap = (gap - 1) / 3)
{
	for (i = gap; i < size; i++)
	{
		temp = array[i];

		for (j = i; j > gap - 1 && array[j - gap] > temp; j -= gap)
		{
			array[j] = array[j - gap];
		}
		array[j] = temp;
	}
	print_array(array, size);
}
}
