#include "main.h"
/**
 * *_memset - Fills the first n bytes
 * @b:  with the constant byte
 * @s: A pointer to the memory area to be filled 
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
