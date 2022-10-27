#include "main.h"

/**
 * _strncpy - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * @n: first n letters of 2nd string
 * Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for(i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
}
return (dest);
}
