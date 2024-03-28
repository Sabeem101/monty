#include "monty.h"

/**
 * nleng - counts how many characters with a number
 * @num: number
 *
 * Return: number length
 */
size_t nleng(int num)
{
	int leng = 0;

	if (!num)
	{
		return (1);
	}
	if (num <= 0)
	{
		leng++;
	}
	while (num != 0)
	{
		num /= 10;
		leng++;
	}
	return (leng);
}
/**
 * nverify - verifies if a number for oppush is valid or not
 * @token: token string
 *
 * Return: void
 */
void nverify(char *token)
{
	int x = 0;

	if (atoi(token) < 0)
	{
		x++;
	}
	if ((isdigit(token[x]) && strlen(token) == nleng(atoi(token))) ||
			(token[0] == '-' && isdigit(token[1])))
	{
		datas.pval = atoi(token);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", datas.curr_line);
		itfrees(datas.head);
		exit(EXIT_FAILURE);
	}
}
