#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order
 * @list: list of integers to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *slot, *prev, *current;

	if (!(*list)->next || !list || !(*list))
		return;

	current = (*list)->next;		
	while (current)
	{
		slot = current;
		prev = current->prev;
		while (slot->n < prev->n)
		{
			slot->next = prev;
			slot->prev = prev->prev;
			prev->prev = slot;
			prev->next = slot->next;
			print_list(*list);
		}
		current = current->next;
	}
	return;
}
