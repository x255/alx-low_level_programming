#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of the elements in linked list
 * @g: pointer to the list_t list
 *
 */
size_t list_len(const list_t *g)
{
size_t siz = 0;

while (g)
{
siz++;
g = g->next;
}
return (n);
}
