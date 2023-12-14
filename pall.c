#include "monty.h"

/**
 * f_pall - Prints the stack.
 * @head: Head of stack.
 * @line_number: No used.
 *
 * Return: No return.
*/
void f_pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
