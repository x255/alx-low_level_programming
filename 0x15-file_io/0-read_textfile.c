#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - The function is designed to retrieve the
 * contents of a text file and display them on the POSIX standard output.
 * @filename: A variable that stores the memory address of the file name.
 * @letters: The specified quantity of letters that the function
 * is intended to read from a file and display.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}

free(buffer);
close(o);

return (w);
}
