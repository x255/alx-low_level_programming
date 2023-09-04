#include "main.h"
#include <stdio.h>
/**
 * get_bit - retrieve the value of a specific
 * bit located at a specified index
 * @n: the numerical value to be examined
 * @index:the position, starting from 0,
 * of the bit whose value we wish to obtain
 * Return: The value of the bit located at
 * the specified index. If there is an error, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hold;

if (index > 64)
return (-1);

hold = n >> index;

return (hold & 1);
}