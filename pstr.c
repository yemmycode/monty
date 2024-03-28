#include "monty.h"

/**
* f_pstr - Outputs the string beginning from the stack's top,
* ending with a newline character.
* @head: pointer to the top node of the stack.
* @counter: the current operation's line number.
* Return: This function does not return a value.
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *current_node;

(void)counter;

current_node = *head;
while (current_node)
{
if (current_node->n > 127 || current_node->n <= 0)
{
break;
}
printf("%c", current_node->n);
current_node = current_node->next; 
}
printf("\n");
}
