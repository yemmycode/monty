#include "monty.h"

/**
* f_mod - Calculates the modulus of the second top element by the top element of the stack.
* @head: A pointer to the head of the stack.
* @counter: The line number currently being processed.
* Return: This function does not return any value.
*/
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *temp_node;
int stack_size = 0, remainder;

temp_node = *head;
while (temp_node)
{
temp_node = temp_node->next;
stack_size++;
}
if (stack_size < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp_node = *head;
if (temp_node->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
remainder = temp_node->next->n % temp_node->n;
temp_node->next->n = remainder;
*head = temp_node->next;
free(temp_node);
}
