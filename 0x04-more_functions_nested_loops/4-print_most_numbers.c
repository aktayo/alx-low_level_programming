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
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;
	}
	_putchar('\n');
	return (0);
}
