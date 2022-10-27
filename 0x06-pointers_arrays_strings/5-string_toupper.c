#include "main.h"

/**
 * string_toupper - change the case of string
 * @str: string to change it case
 * Return: str
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = (int)str[i] - 32;
}
return (str);
}
