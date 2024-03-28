#include "monty.h"

/**
 * op_sub - substracts the head of the stack from the second
 *			element of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_sub(stack_t **head, unsigned int line_number)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.line_number);
	(*head)->n -= val;
}
