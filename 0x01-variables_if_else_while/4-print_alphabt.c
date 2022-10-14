#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' && i == 'q')
		{
			i++;
			continue;
		}
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
