#include "monty.h"
/**
 * f_push - add new node to the stack
 * @head: stack head
 * @cnter: line_number
 * Return: returns nothing
*/
void f_push(stack_t **head, unsigned int cnter)
{
	int i, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cnter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);

			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cnter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);

		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
	{
		addnode(head, i);
	}
	else
		addqueue(head, i);
}
