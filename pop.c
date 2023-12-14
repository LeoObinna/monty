#include "monty.h"

/**
 * f_pop - Prints the top.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
*/
void f_pop(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
