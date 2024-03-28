#include "monty.h"

/**
 * op_add - adds two elements of the stack
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_add(stack_t **head, unsigned int curr_line)
{
	int val = 0;

	if (!*head || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	val = (*head)->n;
	op_pop(&datas.head, datas.curr_line);
	(*head)->n += val;
}
