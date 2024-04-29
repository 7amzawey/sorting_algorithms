#include "sort.h"
/**
 * bubble_sort - this function sorts an array of integers in ascending order
 * @array: is the array
 * @size: is the size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
int temp;
size_t size_temp = size;

if (!array || !size)
	return;

for (i = 0; i < size - 1; i++)
{
	if (array[i] > array[i + 1])
	{
		temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
		print_array(array, size);
		if (i + 2 == size_temp)
		{
			i = -1;
			size_temp--;
		}
	}
}
}
