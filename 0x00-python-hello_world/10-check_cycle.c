#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list we want to check
 *
 * Return: 1 if the list has a cycle, 0 if otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *is_slow = list;
	listint_t *is_fast = list;


	if (!list)
		return (0);


	while (is_slow && is_fast && is_fast->next)
	{
		is_slow = is_slow->next;
		is_fast = is_fast->next->next;
		if (is_slow == is_fast)
			return (1);
	}

	return (0);
}
