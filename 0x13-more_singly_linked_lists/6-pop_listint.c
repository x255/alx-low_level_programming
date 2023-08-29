#include "lists.h"

/**
 * pop_listint - deletes head node of the linked list
 * @head: points to the first element in linked list
 *
 * Return: data inside elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
