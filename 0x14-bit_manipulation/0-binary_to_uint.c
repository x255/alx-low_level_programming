#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - is a function that converts a
 * binary number into an unsigned integer.
 * @b: char string
 * Return: The result will be the converted decimal number,
 * or 0 if there is a character that cannot be converted.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total, power;
int len;

if (b == NULL)
return (0);

for (len = 0; b[len]; len++)
{
if (b[len] != '0' && b[len] != '1')
return (0);
}

for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
{
if (b[len] == '1')
total += power;
}

return (total);
}
