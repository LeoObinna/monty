#include "monty.h"

/**
  *f_sub- Subtracts the top element of the stack from the second
 top element of the stack. 
  *@head: The head of the stack.
  *@line_number: The line_number.
  *Return: No return.
 */
void f_sub(stack_t **head, unsigned int line_number)
{
	stack_t *aux;
	int d, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	d = aux->next->n - aux->n;
	aux->next->n = d;
	*head = aux->next;
	free(aux);
}
