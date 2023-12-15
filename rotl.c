#include "monty.h"

/**
 * f_rotl- Rotates the stack to the top.
 * @head: The head of the stack.
 * @line_number: The line_number.
 * Return: No return.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = aux;
}
