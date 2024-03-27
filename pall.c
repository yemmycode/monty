#include "monty.h"

/**
* print_stack - Displays the stack elements
* @stack_head: Pointer to the head of the stack
* @line_count: Line count (not used)
*
* Description: This function prints all the elements of the stack.
* Each element is printed followed by a newline character.
*
* Return: void
*/
void print_stack(stack_t **stack_head, unsigned int line_count) 
{
stack_t *current_node;
(void)line_count;

current_node = *stack_head;
if (current_node == NULL)
return;

while (current_node) 
{
printf("%d\n", current_node->n);
current_node = current_node->next;
}
}
