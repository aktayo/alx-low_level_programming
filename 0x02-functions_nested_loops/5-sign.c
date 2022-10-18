#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: variable
 * Return: + if n greater than 0 else -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else
	{
		putchar ('-');
		return (-1);
	}
}
