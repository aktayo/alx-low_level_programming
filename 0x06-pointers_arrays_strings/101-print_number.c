
#include "main.h"

/**
 * print_number - change the case of string
 * @str: string to change it case
 * Return: str
 */
void print_number(int n)
{

	n = 0;
	while (n < 10)
	{
		_putchar(n % 10 + '0');
		n++;
	}
	_putchar('\n');
	return (0);
}
