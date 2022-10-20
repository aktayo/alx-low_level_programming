#include "main.h"
/**
 *print_triangle - print_square#
 *@size: no of times
 * Return: 0
 */

void print_triangle(int size)
{
	int  a, bt;

	if (size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			for (bt = size - a; bt > 0; bt--)
				_putchar(' ');

			for (bt = 0; bt < a; bt++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}
}
