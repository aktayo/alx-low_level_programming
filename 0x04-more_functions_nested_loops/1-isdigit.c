#include "main.h"
/**
 * print_alphabet - Print all alphabet in lowercase
 *@c: the variable
 * Return: Alway 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int main(void)
{
	 char c;

	 c = '0';
	 printf("%c: %d\n", c, _isdigit(c));

	 c = 'a';
	 printf("%c: %d\n", c, _isdigit(c));

	 return (0);
}
