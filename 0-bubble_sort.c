#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, aux, change;

	while (1)
	{
		change = 0;
		for (i = 1; (size_t)i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				change = 1;
				aux = array[i];
				array[i] = array[i - 1];
				array[i - 1] = aux;
				print_array((const int *)array, size);
			}
		}
		if (change == 0)
			break;
	}

}
