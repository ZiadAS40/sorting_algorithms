#include "sort.h"

/**
 * selection_sort - implement the selection sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int carry[2];
	int temp, flag = 0;

	for (i = 0; i < size; i++)
	{
		carry[0] = array[i];
		carry[1] = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < carry[0])
			{
				carry[0] = array[j];
				carry[1] = j;
				flag = 1;
			}
		}
		if (flag)
		{
			temp = array[i];
			array[i] = carry[0];
			array[carry[1]] = temp;
			print_array(array, size);
			flag = 0;
		}
	}
}
