#include "monty.h"

/**
* f_div - Executes division on the top two elements of the stack.
* @head: A pointer to the top of the stack.
* @counter: The current line number in the script file.
* Return: This function does not return a value.
*/
void f_div(stack_t **head, unsigned int counter)
{
stack_t *temp;

int stack_len = 0, result;

temp = *head;


while (temp)
{
temp = temp->next;
stack_len++;
}


if (stack_len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

temp = *head;


if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}


result = temp->next->n / temp->n;
temp->next->n = result;
*head = temp->next;
free(temp);
}
