#include "main.h"
/**
 * print_alphabet - Print all alphabet in lowercase
 *
 * Return: Alway 0
*/

void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
	return (0);
}
