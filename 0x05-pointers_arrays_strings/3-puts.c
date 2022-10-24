
#include "main.h"
/**
 *_puts - count the length of a string 
 *@str: variable 
 * Return: 0
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(str++);
}
_putchar('\n');
}
