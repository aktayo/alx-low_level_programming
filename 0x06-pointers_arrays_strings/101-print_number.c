#include "main.h"

/**
 * print_number - change the case of string
 * @str: string to change it case
 * Return: 0
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
_putchar('0');
if (n/10)
print_number(n/10);
_putchar(n % 10 + '0');
if (n == '\n')
_putchar('\n');
}
