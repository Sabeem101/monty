#include "monty.h"

/**
 * op_mod - computes the modulus of the division of the second element
 *			by the head of the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_mod(stack_t **head, unsigned int line_number)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.line_number);
	(*head)->n %= val;
}
