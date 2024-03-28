#include "monty.h"

/**
 * rmv_spaces - removes spaces
 * @str: string
 *
 * Return: string without spaces
 */
char *rmv_spaces(char *str)
{
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
			break;
	}
	return (str);
}
