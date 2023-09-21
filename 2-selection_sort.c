#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * selection_sort- Bubble sort function
 * Description: This function sorts arrays using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Returns nothing
 */
void selection_sort(int *array, size_t size)
{
	int min, temp2;
	size_t i, j;

	min = 0;
	temp2 = 0;

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			min = array[i];
			for (j = i; j < size; j++)
			{
				if (min > array[j])
				{
					min = array[j];
					temp2 = j;
				}
			}
			if (min != array[i])
			{
				array[temp2] = array[i];
				array[i] = min;
				print_array(array, size);
			}
		}
	}
}
