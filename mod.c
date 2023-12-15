#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
*/
void f_mod(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int j = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		j++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
