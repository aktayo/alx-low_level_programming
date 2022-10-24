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
