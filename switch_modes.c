#include "monty.h"

/**
 * switch_modes - switches modes between stack and queue
 * @head: list head
 * @line_number: opcode line number
 *
 * Return: void
 */
void switch_modes(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	(void)head;

	if (strcmp(datas.opcode, "queue") == 0)
	{
		datas.mode = 1;
	}
	else if (strcmp(datas.opcode, "stack") == 0)
	{
		datas.mode = 0;
	}
}
