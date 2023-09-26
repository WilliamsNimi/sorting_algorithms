#include <stddef.h>
#include <stdlib.h>
#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list- The insertion sort function
 * Description: This function sorts a linkedlist using insertion sort algorithm
 * @list: The list to be sorted
 * Return: Returns nothing
 */
void insertion_sort_list(listint_t **list)
{
	int temp;

	temp = 0;
	while (*list != NULL)
	{
		if ((*list)->next->n > (*list)->n)
		{
			temp = (*list)->next;
			(*list)->next = (*list)->next->next;
			(*list)->next->next = temp;
		}
		(*list) = (*list)->next;
		print_list(*list);
	}
}
