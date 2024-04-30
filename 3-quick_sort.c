#include "sort.h"

/**
 * quick_sort - Entry point for the quicksort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	recursive_sort(array, 0, size - 1, size);
}

/**
 * recursive_sort - Sorts an array recursively using the quicksort method.
 * @arr: The array to sort.
 * @left: The leftmost index of the sub-array to sort.
 * @right: The rightmost index of the sub-array to sort.
 * @size: The total size of the array (used for printing).
 */

void recursive_sort(int *arr, int left, int right, size_t size)
{
	int pivot_index;

	if (left < right)
	{
		pivot_index = partition(arr, left, right, size);
		recursive_sort(arr, left, pivot_index - 1, size);
		recursive_sort(arr, pivot_index + 1, right, size);
	}
}

/**
 * partition - Rearranges the elements of a sub-array around a pivot.
 * @arr: The array to partition.
 * @left: The starting index of the sub-array.
 * @right: The ending index of the sub-array.
 * @size: The full size of the array (used for printing).
 * Return: The index of the pivot after partitioning.
 */

int partition(int *arr, int left, int right, size_t size)
{
	int pivot_value = arr[right];
	int Sindex = left;
	int j, temp;

	for (j = left; j < right; j++)
	{
		if (arr[j] < pivot_value)
		{
			if (Sindex != j)
			{
				temp = arr[j];
				arr[j] = arr[Sindex];
				arr[Sindex] = temp;
				print_array(arr, size);
			}
			Sindex++;
		}
	}
	if (arr[Sindex] != arr[right])
	{
		temp = arr[Sindex];
		arr[Sindex] = arr[right];
		arr[right] = temp;
		print_array(arr, size);
	}

	return (Sindex);
}
