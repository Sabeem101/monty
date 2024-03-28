#include "monty.h"

/**
 * op_pint - prints the value at the head of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_pint(stack_t **head, unsigned int curr_line)
{
	if (!head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*head)->n);
	fflush(stdout);
}
