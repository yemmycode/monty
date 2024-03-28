#include "monty.h"

/**
* f_pop - Removes the top element of the stack
* @head: Pointer to the top node of the stack
* @counter: The current line number in the script
* Return: Void, exits with failure if the stack is empty
*/
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *temp_node;

if (!*head)
{
fprintf(stderr, "L%d: cannot 'pop' from an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

temp_node = *head;
*head = temp_node->next;
free(temp_node);
}
