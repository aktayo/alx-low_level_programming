#include "main.h"

/**
 * print_number - change the case of string
 * @str: string to change it case
 * Return: str
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n == 0)
_putchar('0');
if (n/10)
_putchar(n % 10 + '0');
}
