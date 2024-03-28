#include "monty.h"

/**
 * op_pint - prints the value at the head of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_pint(stack_t **head, unsigned int line_number)
{
	if (!*head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*head)->n);
	fflush(stdout);
}
