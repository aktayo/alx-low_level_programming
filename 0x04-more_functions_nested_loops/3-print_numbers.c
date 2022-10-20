#include "main.h"
/**
 *print_numbers - multiply 2 variables
 *
 * Return: ret product of a and b
 */

void print_numbers (void)
{

	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
}
