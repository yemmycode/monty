#include "monty.h"

/**
* f_pall - Prints all the values on the stack, starting from the top.
* @head: A pointer to the top of the stack.
* @counter: Unused parameter.
* Return: This function does not return a value.
*/
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *current = *head;
(void)counter;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
