#include "main.h"

/**
 * get_endianness - verify the byte order
 * Return: 0 if the system is using big endian
 * byte order, or 1 if it is using little endian byte order.
 */
int get_endianness(void)
{
int num;

num = 1;
if (*(char *)&num == 1)
return (1);
else
return (0);
}
