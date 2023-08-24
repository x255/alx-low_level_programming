#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @top: The list_t list to be freed
 */
void free_list(list_t *top)
{
list_t *temp;

while (top)
{
temp = top->next;
free(top->str);
free(top);
top = temp;
}
}
