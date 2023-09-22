#include "monty.h"

/**
 * f_pall - Prints the elements of the stack
 * @head: Pointer to the stack's head
 * @counter: Unused parameter
 *
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
	(void)counter;

	if (*head == NULL)
	{
		printf("The stack is empty.\n");
		return;
	}

	print_stack(*head);
}

/**
 * print_stack - Helper function to print the elements of the stack
 * @head: Pointer to the stack's head
 *
 * Return: No return value
 */
void print_stack(stack_t *head)
{
	if (head == NULL)
		return;

	printf("%d\n", head->n);
	print_stack(head->next);
}

