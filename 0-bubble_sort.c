#include "sort.h"

/**
 * bubble_sort - a function to sort the array with the
 * bubble sort algorithm.
 * @array: the array to sort.
 * @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (j = size; j > 0; j--)
	{
		for (i = 1; i < j; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
			print_array(array, size);
		}
	}
}
