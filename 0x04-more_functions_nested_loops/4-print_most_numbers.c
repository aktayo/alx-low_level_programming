#include "main.h"
/**
 *print_most_numbers - priint 0 - 9
 *
 * Return: 0
 */

int i;

void print_most_numbers(void)
{
	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar (i % 10 + '0');
		i++;
	}
	_putchar ('\n');
	return (0);
}
