#include "monty.h"

/**
* f_rotl - Moves the first element of the stack to the end,
* effectively rotating the stack.
* @head: pointer to the top node of the stack.
* @counter: the current operation's line number (unused).
* Return: This function does not return any value.
*/
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *temp_node = *head, *next_node;

if (*head == NULL || (*head)->next == NULL)
{
return;
}

next_node = (*head)->next;
next_node->prev = NULL;

while (temp_node->next != NULL)
{
temp_node = temp_node->next;
}

temp_node->next = *head;
(*head)->next = NULL;
(*head)->prev = temp_node;
*head = next_node;
}
