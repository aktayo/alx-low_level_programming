#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar (i);
		i--;
	}
	putchar ('\n');
	return (0);
}
