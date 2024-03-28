#include "monty.h"

/**
 * op_mul - multiplies the second element of the stack
 *			with the head
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_mul(stack_t **head, unsigned int line_number)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.line_number);
	(*head)->n *= val;
}
