#include <stdio.h>
/**
 * main - Entry point for code 8
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar (n % 10 + '0');
		n++;
	}
	int i;

	i = 'a';
	while (i <= 'f')
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
