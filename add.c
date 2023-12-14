#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
*/
void f_add(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int j = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		j++;
	}
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
