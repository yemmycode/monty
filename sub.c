#include "monty.h"

/**
* f_sub - Deducts the second top element of the stack from the top element.
* @head: A pointer to the top element of the stack.
* @counter: The line number from the bytecode file.
* Return: This function does not produce a return value.
*/
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *temp;
int difference, node_count;

temp = *head;
for (node_count = 0; temp != NULL; node_count++)
temp = temp->next;
if (node_count < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
difference = temp->next->n - temp->n;
temp->next->n = difference;
*head = temp->next;
free(temp);
}
