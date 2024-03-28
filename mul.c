#include "monty.h"

/**
* f_mul - Executes multiplication on the top two elements of the stack.
* @head: A pointer to the top of the stack.
* @counter: The current line number being executed.
* Return: This function does not return a value.
*/
void f_mul(stack_t **head, unsigned int counter)
{
stack_t *temp;
int stack_length = 0, result;

temp = *head;
while (temp)
{
temp = temp->next;
stack_length++;
}
if (stack_length < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
result = temp->next->n * temp->n;
temp->next->n = result;
*head = temp->next;
free(temp);
}
