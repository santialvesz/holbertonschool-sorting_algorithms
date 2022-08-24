#include "sort.h"
/*
 *

void selection_sort(int *array, size_t size)
{
	int  aux;
	size_t min, a, b;

	if (!array)
		return;
	for (a = 0; a < size - 1; a++)
	{
		min = a;

		for (b = a + 1; b < size; b++)
		{
		
				if(array[b] < array[min])
				{
					min = b;
				}
		}
				if (min != a)
				{
					aux = array[a];
					array[a] = array[min];
					array[min] = aux;
					print_array(array, size);
				}		
	}
}
