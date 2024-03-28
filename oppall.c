#include "monty.h"

/**
 * op_pall - prints all elements of a list
 * @head: llist head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_pall(stack_t **head, unsigned int curr_line)
{
	stack_t *curr = *head;
	int x;

	(void)curr_line;
	for (x = 0; curr; x++)
	{
		fprintf(stdout, "%d\n", curr->n);
		curr = curr->next;
	}
	fflush(stdout);
}
