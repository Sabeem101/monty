#include "monty.h"

/**
 * op_pop - delete the head element of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_pop(stack_t **head, unsigned int curr_line)
{
	if (!*head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
	}
}
