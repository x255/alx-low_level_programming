#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of the elements in linked list
 * @h: pointer to the list_t list
 *
 */
size_t list_len(const list_t *h)
{
size_t siz = 0;

while (h)
{
siz++;
h = h->next;
}
return (n);
}
