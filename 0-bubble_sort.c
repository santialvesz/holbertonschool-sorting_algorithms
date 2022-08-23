#include "sort.h"

void bubble_sort(int *array, size_t size)
{
int a = 0, aux, num;

	while(1)
	{
	num = 0;
		for (a = 1; (size_t)a < size; a++)
		{
			if (array[a - 1] > array[a])
			{
				num = 1;
				aux = array[a];
				array[a] = array[a - 1];
				array[a - 1] = aux;
				print_array(array, size);
			}
		}
	if (num == 0) 
		break;
	}

}
