#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Alway 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	printf("Last Digit of %d is %d", n, num);
	if (num > 5)
	{
		printf("and is greater than 5");
	}
	else if (num == 0)
	{
		printf("and is 0");
	}
	else if (num < 6 && != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
