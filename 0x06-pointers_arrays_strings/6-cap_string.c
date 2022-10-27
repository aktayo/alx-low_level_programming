#include "main.h"

/**
 * *cap_string - change the case of string
 * @str: string to change it case
 * Return: str
 */

char *cap_string(char *str)
{
int i;

i = 0;
while (str[i])
{
while (str[i] >= 'A' && str[i] <= 'Z')
i++;
if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '{' ||
i == 0)
str[i] -= 32;
i++;
}
return (str);
}
