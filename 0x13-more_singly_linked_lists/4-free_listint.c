#include "lists.h"

/**
 * free_listint - this function frees the memories allocated
 * @head: this is the pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmpr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmpr = head->next;
		free(head);
		head = tmpr;
	}
	free(head);
}
