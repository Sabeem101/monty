#include "monty.h"

/**
 * op_pall - prints all elements of a list
 * @head: llist head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_pall(stack_t **head, unsigned int line_number)
{
	stack_t *curr = *head;
	int x;

	(void)line_number;
	for (x = 0; curr; x++)
	{
		fprintf(stdout, "%d\n", curr->n);
		curr = curr->next;
	}
	fflush(stdout);
}
