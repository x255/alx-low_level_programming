#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of the linked list
 * @g: pointer to list_t list to print
 *
 * Return: number of the nodes printed.
 */
size_t print_list(const list_t *g)
{
size_t k = 0;

while (g)
{

if (!g->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", g->len, g->str);
g = g->next;
k++;
}

return (k);
}
