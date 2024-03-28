#include "monty.h"

/**
 * op_div - divides the second element of the stack by
 *		the head of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_div(stack_t **head, unsigned int curr_line)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't divide, stack too short\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.curr_line);
	(*head)->n /= val;
}
