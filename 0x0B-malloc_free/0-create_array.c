#include "main.h"
/**
 * *create_array - Fills the first n bytes
 * @size: with the constant byte
 * @c: A pointer to the memory area to be filled
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}
/*Define values with malloc /

buffer = (char *)malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}
else
{

position = 0;

while (position < size) /*while for array*/

{

*(buffer + position) = c;

position++;

}

return (buffer);

}
}
