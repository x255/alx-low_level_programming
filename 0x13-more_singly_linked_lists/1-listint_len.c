#include "lists.h"

/**
 * listint_len - returns number of the elements in the linked lists
 * @h: linked list of the listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
