#include "monty.h"

/**
* f_add - Executes addition of the top two elements in the stack.
* @head: A pointer to the top of the stack.
* @counter: The current line number in the script.
* Return: This function does not return a value.
*/
void f_add(stack_t **head, unsigned int counter)
{
stack_t *temp_node;
int stack_length = 0, sum;

temp_node = *head;
while (temp_node)
{
temp_node = temp_node->next;
stack_length++;
}
if (stack_length < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp_node = *head;
sum = temp_node->n + temp_node->next->n;
temp_node->next->n = sum;
*head = temp_node->next;
free(temp_node);
}
