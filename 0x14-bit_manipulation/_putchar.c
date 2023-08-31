#include <unistd.h>

/**
 * _putchar - writes character c to the stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returne
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
