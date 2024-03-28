#include "monty.h"

/**
* f_rotr - Rotates the stack elements to the bottom.
* @head: A pointer to the top of the stack.
* @counter: The current line number in the script (unused).
* Return: This function does not return a value.
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tail;

tail = *head;

if (*head == NULL || (*head)->next == NULL)
{
return;
}

while (tail->next)
{
tail = tail->next;
}

tail->next = *head;
tail->prev->next = NULL;
tail->prev = NULL;
(*head)->prev = tail;
*head = tail;
}
