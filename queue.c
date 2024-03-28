#include "monty.h"

/**
* f_queue - Outputs the element at the top of the stack
* @head: Pointer to the top of the stack
* @counter: The current line number in the script
* Return: Void function, does not return a value
*/
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;

bus.lifi = 1;
}

/**
* addqueue - Appends a new node to the end of the stack
* @n: The value to be added to the new node
* @head: Pointer to the top of the stack
* Return: Void function, does not return a value
*/
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));

if (new_node == NULL)
{
printf("Error\n");
return;
}
new_node->n = n;
new_node->next = NULL;

if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
while (aux->next)
aux = aux->next;
aux->next = new_node;
new_node->prev = aux;
}
}
