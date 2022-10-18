#include "main.h"
/**
 * _islower - print if lowercase else print 0
 * @c: variable input
 * Return: 1 if char is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	else
		return (0);
	}
}
