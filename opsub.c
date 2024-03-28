#include "monty.h"

/**
 * op_sub - substracts the head of the stack from the second
 *			element of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_sub(stack_t **head, unsigned int curr_line)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.curr_line);
	(*head)->n -= val;
}
