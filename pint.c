#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack, followed by a new line.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
*/
void f_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
