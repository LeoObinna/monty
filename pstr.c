#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
*/
void f_pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
