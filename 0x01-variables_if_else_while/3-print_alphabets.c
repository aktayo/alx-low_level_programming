#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	int i;
	int a;

	i = 'a';
	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	a = 'A';
	while (a <= 'Z')
	{
		putchar (a);
		a++;
	}
	putchar ('\n');
	return (0);
}
