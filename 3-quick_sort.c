#include "sort.h"
/**
 * swap - Swaps two integers in an array
 * @array: Pointer
 * @i: variabe int
 * @j: variabe int
 * @size: variabe int
 */
void swap(int *array, int i, int j, size_t size)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		printf(array, size);
	}
	
}
/**
 * partition - Partitions the array using the Lomuto partition scheme
 * @array: Pointer to the array
 * @start: Starting index of the partition
 * @end: Ending index of the partition
 * @size: Size of the array
 * Return: The index of the pivot
 */
int partition(int *array, size_t start, size_t end, size_t size)
{
	int i = start, j, pivot = array[end];

	for (j = start; j <= end; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j, size);
			i++;
		}
	}
	swap(array, i, end, size);
	return (i);
}
/**
 * Sorting - Recursive function for Quick Sort
 * @array: Pointer to the array
 * @start: Starting index of the partition
 * @end: Ending index of the partition
 * @size: Size of the array
 */
void Sorting(int *array, size_t start, size_t end, size_t size)
{
	int pivot;

	if (start >= end)
	{	
		return;
	}

	pivot = partition(array, start, end, size);
		Sorting(array, start, pivot - 1, size);
		Sorting(array, pivot + 1, end, size);

}
/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick Sort algorithm with Lomuto partition scheme
 * @array: Pointer to the array
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	Sorting(array, 0, size - 1, size);
}
