#include "monty.h"

/**
* f_pchar - Outputs the character at the top of the stack, followed by a newline.
* @head: Pointer to the top of the stack.
* @counter: The current line number.
* Return: Void.
*/
void f_pchar(stack_t **head, unsigned int counter)
{
stack_t *top_element;

top_element = *head;

if (!top_element)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (top_element->n > 127 || top_element->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", top_element->n);
}
