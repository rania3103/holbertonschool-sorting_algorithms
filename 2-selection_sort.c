#include "sort.h"
/**
 * selection_sort - sort an array in ascending order using selection sort
 * @array:pointer
 * @size:number of elemnts of the array.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, posmin;
	int tmp;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			posmin = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[posmin])
					posmin = j;
			}
			if (i != posmin)
			{
				tmp = array[i];
				array[i] = array[posmin];
				array[posmin] = tmp;
				print_array(array, size);
			}
		}
	}
}
