#include "sort.h"
/**
 * lomuto_sort - is the sorting function and also the partitioning one.
 * @array: is the array.
 * @start: is the start of the array;
 * @end: is the end of the array;
 * @size: is the array size;
 */
void lomuto_sort(int *array, int start, int end, size_t size)
{
	int pivot;
	int i;
	int j;
	int temp;

	if (start >= end)
		return;
	pivot = array[end];
	i = start;
	j = start;

	while (j < end)
	{
		if (array[j] <= pivot)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		if (i != j)
		print_array(array, size);
		i++;
	}
	j++;
	}
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	if (i != end)
	print_array(array, size);

	lomuto_sort(array, start, i - 1, size);
	lomuto_sort(array, i + 1, end, size);
}
/**
 * quick_sort - is the sorting algorithm
 * @array: the array that will be sorted
 * @size: is the array size
 */
void quick_sort(int *array, size_t size)
{
	lomuto_sort(array, 0, size - 1, size);
}
