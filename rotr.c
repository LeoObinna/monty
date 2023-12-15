#include "monty.h"

/**
 * f_rotr- rotates the stack to the bottom
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
