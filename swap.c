#include "monty.h"

/**
* f_swap - Swaps the values of the top two elements of the stack
* @head: Pointer to the top node of the stack
* @counter: The current line number in the script
* Return: Void, 
*/
void f_swap(stack_t **head, unsigned int counter)
{
stack_t *current_node;
int stack_length = 0, temp_value;

current_node = *head;
while (current_node)
{
current_node = current_node->next;
stack_length++;
}
if (stack_length < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
current_node = *head;
temp_value = current_node->n;
current_node->n = current_node->next->n;
current_node->next->n = temp_value;
}
