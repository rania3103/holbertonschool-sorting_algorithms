#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array:array of integers.
 * @size:the size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int test, tmp;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size - 1; i++)
	{
		test = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				test = 0;
			}
		}
		if (test == 1)
			break;
	}
	}
}
