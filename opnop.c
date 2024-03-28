#include "monty.h"

/**
 * op_nop - doesn't do anything to the stack
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void op_nop(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
}
