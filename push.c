#include "monty.h"

/**
*f_push - Function to add a node to the stack
*@head: Pointer to the head of the stack
*@counter: Line number
*Description: This function adds a node to the stack.
*Return: No return value
*/
void f_push(stack_t **head, unsigned int counter)
{
Bus bus;
int n, j = 0, flag = 0;

bus.arg = "example_argument";
bus.lifi = 0;
bus.file = fopen("example_file.txt", "r");
bus.content = malloc(sizeof(char) * 100);

if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
if (bus.file)
fclose(bus.file);
if (bus.content)
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
if (bus.file)
fclose(bus.file);
if (bus.content)
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
n = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);

if (bus.file)
fclose(bus.file);
if (bus.content)
free(bus.content);
}
