#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack
 * @head: Pointer to the stack's head
 * @counter: Line number in the Monty file
 *
 * Return: No return value
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current->next->n += current->n;
	f_pop(head, counter);
}

