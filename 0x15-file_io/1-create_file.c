#include "main.h"

/**
 * create_file - This function is responsible for generating a new file.
 * @filename: A variable that stores the memory address of the file
 * name to be used for creating the file.
 * @text_content: A variable that holds the memory address of the string
 * to be written into the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
