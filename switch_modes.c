#include "monty.h"

/**
 * switch_modes - switches modes between stack and queue
 * @head: list head
 * @curr_line: opcode line number
 *
 * Return: void
 */
void switch_modes(stack_t **head, unsigned int curr_line)
{
	(void)curr_line;
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
