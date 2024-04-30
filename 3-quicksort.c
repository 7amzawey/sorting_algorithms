#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order using
 * the quick sort algo
 * @array: is the array
 * @size: is the size of the array.
 */
void quick_sort(int *array, size_t size)
{
	int piv;
	size_t i, j = 0, m, k;
	int *array_a, *array_b;
	int f, temp;

	if (size < 2)
		return;

	piv = array[size -1];

	array_a = malloc(size * sizeof(int));
	array_b = malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		if (array[i] < piv)
		{
			temp = array[i];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
			j++;
		}
		if (i < size - 1 && array[i + 1] == piv && array[i] > piv)
		{
			array[size - 1] = array[j];
			array[j] = piv;
			piv = array[size - 1];
			/*printf("piv: %d\n", piv);*/
			j++;
			print_array(array, size);
			for (k = 0; k < j; k++)
			{
				array_a[k] = array[k];
			}
			for (m = j + 1, f = 0; m < size; m++, f++)
			{
				array_b[f] = array[m];
			}
			/*printf("array_a: ");
			print_array(array_a,k);
			printf("array_b: ");
			print_array(array_b,f);*/
			if (k > 1)
				quick_sort(array_a, k);
			quick_sort(array_b, f);
		}
	}
}
