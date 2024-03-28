#include "monty.h"

/**
 * op_mod - computes the modulus of the division of the second element
 *			by the head of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_mod(stack_t **head, unsigned int curr_line)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", curr_line);
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
	(*head)->n %= val;
}
