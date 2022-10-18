#include "main.h"
/**
 * print_alphabet - Print all alphabet in lowercase
 *
 * Return: Alway 0
*/

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
