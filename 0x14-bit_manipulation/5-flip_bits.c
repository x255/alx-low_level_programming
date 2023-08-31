#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips bits to convert one number to another
 * @n: intial number
 * @m: 2nd number to convert
 * Return: number of the bits that were needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff;
int counter;

diff = n ^ m;
counter = 0;

while (diff)
{
counter++;
diff &= (diff - 1);
}

return (counter);
}
