#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @top: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **top, const char *str)
{
list_t *new;
list_t *temp = *top;
unsigned int l = 0;

while (str[l])
l++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->l = l;
new->next = NULL;

if (*top == NULL)
{
*top = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
