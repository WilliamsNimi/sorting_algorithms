#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * bubble_sort- Bubble sort function
 * Description: This function sorts arrays using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Returns nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	temp = 0;
	if (array != NULL && size != 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
