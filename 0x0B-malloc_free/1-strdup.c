#include "main.h"
/**
 *_strlen - count the length of a string
 *@s: variable
 * Return: ret length of s
 */


int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}

#include "main.h"
/**
*_strcpy - copies the string pointed to by src
*@dest: destination
*@src: source
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}

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

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
