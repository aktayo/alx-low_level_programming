#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
 int i;

	i = 0;
	while (i < 10)
	{
		putchar (i%10 + '0');
		i++;
	}
	putchar ('\n');
	return (0);
}
