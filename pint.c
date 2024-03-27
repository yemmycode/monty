#include "monty.h"
/**
* print_f - prints the top element of the stack.
* @head: Pointer to the head of the stack
* @counter: Line number
* Return: void
*/
void print_f(stack_t **head, unsigned int counter, Bus)
{
if (!(*head))
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(Bus->file);
free(Bus->content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
