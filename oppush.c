#include "monty.h"

/**
 * op_push - pushes a new node the the beginning of the stack/queue
 * @head: head of list
 * @curr_line: opcode line number
 *
 * Return: void
 */
void op_push(stack_t **head, unsigned int curr_line)
{
	stack_t *new, *prior;
	int x = 0;

	(void)curr_line;
	if (!head)
		return;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed");
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
	new->n = datas.pval;
	if (datas.mode == 0 || !*head)
	{
		if (*head)
		{
			new->next = *head;
			(*head)->prev = new;
		}
		else
			new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else if (datas.mode == 1)
	{
		prior = *head;
		for (x = 0; prior; x++)
		{
			if (!prior->next)
				break;
			prior = prior->next;
		}
		prior->next = new;
		new->prev = prior;
		new->next = NULL;
	}
}
