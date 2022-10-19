#include "main.h"
/**
 * print_alphabet_x10 - print lowercase 10times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int la;

	for (la = 0; la <= 9; la++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar (i);
		i++;
		}
		_putchar ('\n');
	}
}
