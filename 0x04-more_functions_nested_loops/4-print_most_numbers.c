#include "main.h"
/**
 *print_most_numbers - priint 0 - 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int a = 0;
	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			i++;
			continue;
		}
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
	return (0);
}
