#include "main.h"

/**
 * set_bit - assigns the value of 1 to the bit
 * at the specified index
 * @n: the decimal number passed as a reference (pointer)
 * @index:the position of the bit to be modified,
 * starting from 0
 * Return: 1 if it works, -1 if it returns an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int p;

if (index > 64)
return (-1);

for (p = 1; index > 0; index--, p *= 2)
;
*n += p;

return (1);
}
