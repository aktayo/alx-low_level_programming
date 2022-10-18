#include "main.h"
/**
 * _isalpha - check alpha char
 * @c: variable
 * Return: 1 if c char else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
