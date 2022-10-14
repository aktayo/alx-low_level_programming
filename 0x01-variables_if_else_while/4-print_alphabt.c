#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z' && i != 'q' &&  i != 'e')
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
