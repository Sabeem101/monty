#include "monty.h"

/**
 * op_swap - swaps two elements of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_swap(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	tmp->prev = tmp->next;
	if ((*head)->next->next == NULL)
	{
		tmp->next = NULL;
	}
	else
	{
		tmp->next = tmp->next->next;
		tmp->next->prev = *head;
	}
	*head = tmp->prev;
	(*head)->prev = NULL;
	(*head)->next = tmp;
}
