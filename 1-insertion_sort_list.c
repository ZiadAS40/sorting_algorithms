#include "sort.h"

/**
 * insertion_sort_list - implement the insertion sort algorithm
 * @list: the head of the list.
 * temp -> to temporarly swiping.
 * temp2 -> to save the next node.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp2;

	if ((*list) == NULL)
		return;
	if ((*list)->next == NULL)
	{
		print_list(*list);
		return;
	}
	(*list) = (*list)->next;
	while (temp2 != NULL)
	{
		temp2 = (*list)->next;
		while (1)
		{
			if ((*list)->prev != NULL)
				temp = (*list)->prev;
			if ((*list)->n > temp->n || (*list)->prev == NULL)
			{
				break;
			}
			else
			{

				temp->next = (*list)->next;
				if (temp->prev != NULL)
					temp->prev->next = (*list);
				if (temp->next != NULL)
					temp->next->prev = temp;
				(*list)->prev = temp->prev;
				temp->prev = (*list);
				(*list)->next = temp;
			}
			while (temp->prev != NULL)
				temp = temp->prev;
			print_list(temp);
		}
		if (temp2 != NULL)
			(*list) = temp2;
	}
}
