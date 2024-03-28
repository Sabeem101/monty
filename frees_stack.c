#include "monty.h"

/**
 * itfrees - frees a stack
 * @head: list head
 *
 * Return: void
 */
void itfrees(stack_t *head)
{
	stack_t *ptr1, *ptr2;

	ptr1 = head;
	while (ptr1)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
	datas.head = NULL;
	fclose(datas.trgt_file);
}
